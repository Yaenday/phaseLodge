#include "mainwindow.h"
#include "utils.h"
#include "referee.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Referee referee;
    return a.exec();
}
