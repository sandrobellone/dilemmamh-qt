#include "dilemmamh_qt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dilemmamh_qt w;
    w.show();

    return a.exec();
}
