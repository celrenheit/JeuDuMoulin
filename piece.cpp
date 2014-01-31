#include "piece.h"

Piece::Piece(QWidget *parent) :
    QWidget(parent), _color(QColor(0,0,0)), _radius(10)
{
    this->setMinimumSize(40,40);
    // this->setRadius(10);
}




void Piece::paintEvent(QPaintEvent * event)
{
 QPainter painter(this); //Pour repeindre tout le Widget


// QPen pen(Qt::black, 2, Qt::SolidLine);
// painter.setPen(pen);
 painter.setBrush(QBrush(this->_color));
 painter.drawEllipse(QPoint(20,20), this->_radius, this->_radius);
}

Piece::~Piece()
{
}

void Piece::setColor(const char *color) {
    this->_colorName = QString(color);
    if(this->_colorName == QString("blue")) {
        this->_color =  QColor(0,0,255);
    }
    if(this->_colorName == QString("red")) {
        this->_color =  QColor(255,0,0);
    }
    update();
}

void Piece::setRadius(int radius) {
    this->_radius = radius;
}
