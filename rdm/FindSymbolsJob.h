#ifndef FindSymbolsJob_h
#define FindSymbolsJob_h

#include <QRunnable>
#include <QObject>
#include <QByteArray>
#include <QList>
#include "QueryMessage.h"
#include "Job.h"

class FindSymbolsJob : public Job
{
    Q_OBJECT
public:
    FindSymbolsJob(int i, const QueryMessage &query);
protected:
    virtual void execute();
private:
    const QByteArray string;
    const unsigned queryFlags;
};

#endif
