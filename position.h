#ifndef POSITION_H
#define POSITION_H

#include <QWidget>
#include <QDebug>
#include <QPainter>
#include <QMouseEvent>
#include "piece.h"

class Position : public QWidget
{
    Q_OBJECT
public:
    explicit Position(QWidget *parent = 0);
    void mousePressEvent( QMouseEvent *event);
    void paintEvent(QPaintEvent * event);
    static const bool isValidPosition(int x, int y);
    static const bool isValidPositionSquare(int x, int y, int topLeftCorner, int bottomRightCorner);

signals:

public slots:

private:
    Piece *_piece;
    QWidget *gameField;

};

#endif // POSITION_H
