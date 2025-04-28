#include "test1.h"

#include <QApplication>
#pragma comment(lib, "user32.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    test1 w;
    w.show();//hotfix
    test3 y;
    return a.exec();//jj
}
