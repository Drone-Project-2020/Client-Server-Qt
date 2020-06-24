#ifndef SERVER_H
#define SERVER_H

#include <QtCore>
#include <QTcpServer>
#include <QTcpSocket>


class MyServer : public QObject
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = nullptr);

signals:


private slots:
    void ConnectToMyServer();
    void disconnectToMyServer();
    void readyReadMySocket();

private:
    QTcpServer *server;
};


#endif // SERVER_H
