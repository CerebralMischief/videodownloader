#ifndef TESTDOWNLOAD_H
#define TESTDOWNLOAD_H

#include "./download.h"

#include <QTimer>

namespace Network {

class TestDownload : public Download {
public:
    TestDownload();
    ~TestDownload();

    QString typeName() const;
    bool isInitiatingInstantlyRecommendable() const;

protected:
    void doDownload();
    void abortDownload();
    void doInit();
    void checkStatusAndClear(size_t);

private slots:
    void tick();

private:
    QTimer m_timer;
};
}

#endif // TESTDOWNLOAD_H
