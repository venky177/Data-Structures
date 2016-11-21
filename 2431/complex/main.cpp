#include "gui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gui w;
    //w.resize(500,500);
    w.show();

    return a.exec();
}
