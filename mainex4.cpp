#include "mainwindowex4.h"

#include <QApplication>

MainWindowEx4 *w;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    w = new MainWindowEx4();
    w->show();
    return a.exec();
}
