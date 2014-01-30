#include "gamefield.h"

GameField::GameField(QWidget *parent) :
    QWidget(parent)
{
    setPalette(QPalette(QColor(250, 250, 200)));
    setAutoFillBackground(true);

    QGridLayout *gridLayout = new QGridLayout();

    this->initPositions(gridLayout, 0, 6);
    this->initPositions(gridLayout, 1, 5);
    this->initPositions(gridLayout, 2, 4);

    setLayout(gridLayout);
}




void GameField::drawSquare(QGridLayout *layout, int topLeftCorner = 0, int bottomRightCorner = 6) {


    Position *position = new Position();


}
void GameField::initPositions(QGridLayout *layout, int topLeftCorner, int bottomRightCorner) {
    int x=0, y=0, lastX=0, lastY=0;
    qDebug() << "Init Positions" << topLeftCorner << " et " << bottomRightCorner;
    for(y=0; y<7; y++) {
        for (x=0; x<7;x++) {
            if(Position::isValidPosition(x,y,topLeftCorner,bottomRightCorner))
            {
                qDebug() << "x " << x << "y " << y;
                this->_positions[x][y] = new Position();
                layout->addWidget(this->_positions[x][y], x, y);
            }

        }
    }
}



/*
int x=0, y=0, lastX=0, lastY=0;
bool isFirst = true;
for(y=0; y<7; y++) {
    for (x=0; x<7;x++) {
        // if( x == topLeftCorner && y == topLeftCorner )
        // if current point exists
            // draw point
            // set lastX and lastY and isFirst to false
            // if !isFirst
                // draw line between this points and the before one


    }
}
*/
