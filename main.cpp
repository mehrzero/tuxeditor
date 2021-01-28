#include "tuxeditor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TuxEditor w;
    w.show();
    return a.exec();
}
