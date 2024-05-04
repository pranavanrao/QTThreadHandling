#include "myworker.h"
#include "heavydutyworker.h"

MyWorker::MyWorker()
{
    qDebug() << Q_FUNC_INFO << "Thread ID : " << QThread::currentThread();
}

void MyWorker::run()
{
    HeavyDutyWorker *work = new HeavyDutyWorker;
    work->doWork();
    qDebug() << Q_FUNC_INFO << "Thread ID : " << QThread::currentThread();
}
