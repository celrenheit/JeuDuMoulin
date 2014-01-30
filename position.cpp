#include "position.h"
Position::Position(QWidget *parent) :
    QWidget(parent)
{
}


void Position::mousePressEvent( QMouseEvent *event)
{
    qDebug() << "global Pos: " << event->globalPos();
}

void Position::paintEvent(QPaintEvent * event)
{
 QPainter painter(this); //Pour repeindre tout le Widget


 QPen pen(Qt::black, 2, Qt::SolidLine);
 painter.setPen(pen);
 painter.drawEllipse(QPoint(this->width() / 2,this->height() / 2), 10, 10);
}

 const bool Position::isValidPosition(int x, int y, int topLeftCorner, int bottomRightCorner) {
    return   x == topLeftCorner && y == topLeftCorner // Réalisation des coins
            || x == bottomRightCorner && y == bottomRightCorner
            || x == topLeftCorner && y == bottomRightCorner
            || x == bottomRightCorner && y == topLeftCorner

            || x == topLeftCorner+bottomRightCorner / 2 && y == bottomRightCorner // Réalisation des centres des carrés
            || x == bottomRightCorner && y == topLeftCorner+bottomRightCorner / 2
            || x == topLeftCorner+bottomRightCorner / 2 && y == topLeftCorner
            || x == topLeftCorner && y == topLeftCorner+bottomRightCorner / 2;
}
