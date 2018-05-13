#include "mainwindow.h"
#include "texto.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    Texto t;
    t.show();

    return a.exec();
}
