#include "position.h"

Position::Position(QWidget *parent) :
    QWidget(parent), gameField(parent)
{
    this->_piece = new Piece(this);
    qDebug() << this->parentWidget();
}


void Position::mousePressEvent( QMouseEvent *event)
{
    qDebug() << "global Pos: " << event->globalPos();
    this->_piece->setColor("blue");
    this->_piece->setRadius(15);
}

void Position::paintEvent(QPaintEvent * event)
{
 QPainter painter(this); //Pour repeindre tout le Widget


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
