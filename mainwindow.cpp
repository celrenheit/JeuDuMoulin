#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{


    QWidget *window = new QWidget;
    initButton = new QPushButton("Init");
    QLabel *button2 = new QLabel("Click the buttons to init the game");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(initButton,1);
    layout->addWidget(button2,3);

    window->setLayout(layout);
    window->show();


}

MainWindow::~MainWindow()
{
}
