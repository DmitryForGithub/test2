#include "JustTestForQt.h"
#include <QtWidgets/QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JustTestForQt w;
    w.show();
    return a.exec();
}
