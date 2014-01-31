#include "gamefield.h"

GameField::GameField(QWidget *parent) :
    QWidget(parent), mainWindow(parent)
{
    setPalette(QPalette(QColor(250, 250, 200)));
    setAutoFillBackground(true);

    this->_gridLayout = new QGridLayout(this);

    this->initPositions(this->_gridLayout);

    setLayout(this->_gridLayout);
}

void GameField::paintEvent(QPaintEvent * event)
{
 QPainter painter(this); //Pour repeindre tout le Widget
 QPen pen(Qt::black, 3, Qt::SolidLine);
 painter.setPen(pen);

 painter.drawRect(30,30,385,460);
 painter.drawRect(95,105,260,310);
 painter.drawRect(160,185,130,155);

 painter.drawLine(30, 260,160, 260);
 painter.drawLine(290, 260,420, 260);

 painter.drawLine(223, 30, 223, 180);
 painter.drawLine(223, 340, 223, 490);

}


void GameField::initPositions(QGridLayout *layout) {
    int x=0, y=0;
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


void GameField::restart() {
    int x=0, y=0;

    for(y=0; y<7; y++) {
        for (x=0; x<7;x++) {
            delete this->_positions[x][y];

        }
    }
    this->initPositions(this->_gridLayout);
    repaint();
}
