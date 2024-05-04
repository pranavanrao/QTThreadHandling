#include "mywidget.h"
#include "heavydutyworker.h"
#include "myworker.h"

#include <QApplication>
#include <QPushButton>
#include <QDebug>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;

    QPushButton btn("WHat?", &w);
    HeavyDutyWorker worker;

    w.show();

    MyWorker work;
    work.start();

    qDebug() << Q_FUNC_INFO << "Thread ID : " << QThread::currentThread();

    return a.exec();
}
