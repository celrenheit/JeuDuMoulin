#include "piece.h"

Piece::Piece(QWidget *parent) :
    QWidget(parent),
    _color(QColor(0,0,0)),
    _radius(10),
    _dropped(false)
{
    this->setMinimumSize(40,40);
}




void Piece::paintEvent(QPaintEvent * event)
{
 QPainter painter(this);

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
    this->setRadius(15);
    this->_dropped = true;
    update();
}

void Piece::setRadius(int radius) {
    this->_radius = radius;
}
