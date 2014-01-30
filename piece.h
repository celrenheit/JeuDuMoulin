#ifndef PIECE_H
#define PIECE_H

#include <QDebug>
#include "position.h"

class Piece
{
public:
    Piece();

    void mousePressEvent( QMouseEvent *event);

private:
    QColor *_color;
    QPoint *_position;
};

#endif // PIECE_H
