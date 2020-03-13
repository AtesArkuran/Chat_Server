#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>

#include <QMainWindow>
#include <QMessageBox>

#include <QString>
#include <QVector>
#include <QDebug>

#include <QtNetwork>
#include <QNetworkSession>
#include <QTcpServer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTcpServer *tcpServer = nullptr;
    QNetworkSession *networkSession = nullptr;
};
#endif // MAINWINDOW_H
