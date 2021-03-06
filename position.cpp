#include "position.h"
bool blueAlternateColor = true;
Position::Position(QWidget *parent) :
    QWidget(parent), gameField(parent)
{
    this->_piece = new Piece(this);
}


void Position::mousePressEvent( QMouseEvent *event)
{
    qDebug() << "global Pos: " << event->globalPos();
    if(blueAlternateColor)
    {
        this->_piece->setColor("blue");
    }
    else
    {
        this->_piece->setColor("red");
    }
    blueAlternateColor = !blueAlternateColor;
}


 const bool Position::isValidPositionSquare(int x, int y, int topLeftCorner, int bottomRightCorner) {

    return   x == topLeftCorner && y == topLeftCorner // Réalisation des coins
            || x == bottomRightCorner && y == bottomRightCorner
            || x == topLeftCorner && y == bottomRightCorner
            || x == bottomRightCorner && y == topLeftCorner

            || x == (topLeftCorner+bottomRightCorner) / 2 && y == bottomRightCorner // Réalisation des centres des carrés
            || x == bottomRightCorner && y == (topLeftCorner+bottomRightCorner) / 2
            || x == (topLeftCorner+bottomRightCorner) / 2 && y == topLeftCorner
            || x == topLeftCorner && y == (topLeftCorner+bottomRightCorner) / 2;
}

const bool Position::isValidPosition(int x, int y) {
    return Position::isValidPositionSquare(x, y, 0, 6) || Position::isValidPositionSquare(x, y, 1,5) || Position::isValidPositionSquare(x, y, 2,4);
}


