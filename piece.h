#ifndef PIECE_H
#define PIECE_H

#include <QWidget>
#include <QDebug>
#include <QPainter>
#include <QMouseEvent>
#include <QBrush>
#include <QString>

class Piece : public QWidget
{
    Q_OBJECT
public:
    explicit Piece(QWidget *parent = 0);
    void paintEvent(QPaintEvent * event);
    bool isDropped();
    ~Piece();
    void setColor(const char *color);
    void setRadius(int radius);

signals:

public slots:

private:
    QColor _color;
    QPoint *_position;
    QString _colorName;
    int _radius;
};

#endif // PIECE_H
