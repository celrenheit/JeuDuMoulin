#include "gamefield.h"

GameField::GameField(QWidget *parent) :
    QWidget(parent), mainWindow(parent)
{
    setPalette(QPalette(QColor(250, 250, 200)));
    setAutoFillBackground(true);

    QGridLayout *gridLayout = new QGridLayout();

    this->initPositions(gridLayout);

    setLayout(gridLayout);
}




void GameField::initPositions(QGridLayout *layout) {
    int x=0, y=0, lastX=0, lastY=0;
    for(y=0; y<7; y++) {
        for (x=0; x<7;x++) {
            if(Position::isValidPosition(x,y))
            {
                qDebug() << "x " << x << "y " << y;
                this->_positions[x][y] = new Position(this);
                layout->addWidget(this->_positions[x][y], x, y);
            } else {
                this->_positions[x][y] = NULL;
            }

        }
    }
}

QWidget * GameField::getMainWindow() {
    return this->mainWindow;
}
