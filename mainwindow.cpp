#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent), _currentPlayer("blue")
{
    initButton = new QPushButton("Init");
    _labelInfo = new QLabel("Click the buttons to init the game");

    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->setSpacing(0);
    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget(initButton,0, Qt::AlignLeft);
    hLayout->addWidget(_labelInfo,0, Qt::AlignRight);
    vLayout->addLayout(hLayout);

    GameField *gameField = new GameField(this);
    gameField->setMinimumHeight(300);
    gameField->adjustSize();
    vLayout->addWidget(gameField, 1);

    QLabel *piecesLeftLabel = new QLabel("Nbre de pieces à placer");
    QLabel *bleuPlayerLabel = new QLabel("Joueur Bleu: 0");
    QLabel *redPlayerLabel = new QLabel("Joueur Rouge: 0");

    QHBoxLayout *hBottomLayout = new QHBoxLayout;
    hBottomLayout->addWidget(piecesLeftLabel,0, Qt::AlignLeft);

    QHBoxLayout *hStatsLayout = new QHBoxLayout;
    hStatsLayout->addWidget(bleuPlayerLabel,0, Qt::AlignLeft);
    hStatsLayout->addWidget(redPlayerLabel,0, Qt::AlignRight);

    vLayout->addLayout(hBottomLayout);
    vLayout->addLayout(hStatsLayout);


    // setCentralWidget(window);
    // centralWidget()->setLayout(vLayout);

    setFixedSize(500, 650);
    setLayout(vLayout);

}

MainWindow::~MainWindow()
{
}


const char *MainWindow::getCurrentPlayer()
{
    return this->_currentPlayer;
}

void MainWindow::setCurrentPlayer(const char *player)
{
    this->_currentPlayer = player;
}
