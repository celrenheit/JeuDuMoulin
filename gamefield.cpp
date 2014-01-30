#include "gamefield.h"

GameField::GameField(QWidget *parent) :
    QWidget(parent)
{
    setPalette(QPalette(QColor(250, 250, 200)));
    setAutoFillBackground(true);
}


void GameField::paintEvent(QPaintEvent * event)
{
 QPainter painter(this); //Pour repeindre tout le Widget

 painter.setPen(Qt::NoPen); //Pas de crayon (formes sans dessin des bords)
 painter.setBrush(Qt::blue); //Brosse (couleur de remplissage de la forme)

 painter.drawRect(QRect(10, 10, 10, 100));

}
