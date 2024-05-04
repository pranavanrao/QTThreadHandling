#ifndef HEAVYDUTYWORKER_H
#define HEAVYDUTYWORKER_H

#include <QObject>

class HeavyDutyWorker : public QObject
{
    Q_OBJECT
public:
    explicit HeavyDutyWorker(QObject *parent = nullptr);

    void doWork();

signals:
};

#endif // HEAVYDUTYWORKER_H
