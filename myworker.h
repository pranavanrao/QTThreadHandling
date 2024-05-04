#ifndef MYWORKER_H
#define MYWORKER_H

#include <QThread>
#include <QDebug>

class MyWorker : public QThread
{
    Q_OBJECT
public:
    explicit MyWorker();

    void run();
};

#endif // MYWORKER_H
