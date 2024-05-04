#include "heavydutyworker.h"

#include <QDebug>
#include <QThread>

HeavyDutyWorker::HeavyDutyWorker(QObject *parent)
    : QObject{parent}
{}

void HeavyDutyWorker::doWork()
{
    qDebug() << "Doing the work. I am almost done....";
    QThread::sleep(5);
}
