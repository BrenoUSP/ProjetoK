#include "mainwindow.h"
#include "texto.h"
#include <QApplication>
#include <QSplashScreen>
#include <qthread.h>

class I : public QThread
{
public:
    static void sleep(unsigned long secs) { QThread::sleep(secs); }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("Resources/kiwiLogoGif.gif");
    QSplashScreen splash(pixmap);

    a.setStyle("fusion");
    Texto t;

    splash.show();
    I::sleep(5); // splash is shown for 5 seconds

    t.show();
    splash.finish(&t);
    return a.exec();
}
