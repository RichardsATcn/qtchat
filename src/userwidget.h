#ifndef USERWIDGET_H
#define USERWIDGET_H

#include <QWidget>
#include <QUuid>

class QLabel;

class UserWidget : public QWidget
{
    Q_OBJECT
public:
    explicit UserWidget(const QUuid &uuid);

signals:

public slots:
    void sendFile();
    void startPrivateChat();
    void updateInfo();
    void showDetails();

protected:
    virtual void enterEvent(QEvent *event);
    virtual void leaveEvent(QEvent *event);

private:
    const QUuid uuid;
    QLabel *lbl_icon;
    QLabel *lbl_avatar;
    QLabel *lbl_nickname;
};

#endif // USERWIDGET_H
