#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QDebug>
#include <QGridLayout>
#include "position.h"
class GameField : public QWidget
{
    Q_OBJECT
public:
    explicit GameField(QWidget *parent = 0);
    void draw(QPainter *painter);
    int canvasWidth;
    int canvasHeight;
    void drawSquare(QGridLayout *layout, int topLeftCorner, int bottomRightCorner);
    void initPositions(QGridLayout *layout, int topLeftCorner, int bottomRightCorner);

protected:
signals:

public slots:


private:
    Position *_positions[7][7];

};

#endif // GAMEFIELD_H
