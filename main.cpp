#include "mainwindow.h"
#include <QApplication>

// Git repository (Historique des modifications)
// https://github.com/celrenheit/JeuDuMoulin

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}
