#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "piece.h"
#include "gamefield.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent)
{

    QWidget *window = new QWidget(this);
    initButton = new QPushButton("Init");
    _labelInfo = new QLabel("Click the buttons to init the game");

    QVBoxLayout *vLayout = new QVBoxLayout(window);

    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget(initButton,0, Qt::AlignLeft);
    hLayout->addWidget(_labelInfo,0, Qt::AlignRight);
    vLayout->addLayout(hLayout);

    GameField *painter = new GameField(window);
    vLayout->addWidget(painter);


    // setCentralWidget(window);
    // centralWidget()->setLayout(vLayout);

    window->setFixedSize(500, 650);
    window->setLayout(vLayout);

}

MainWindow::~MainWindow()
{
}
