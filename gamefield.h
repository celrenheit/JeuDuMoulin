#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QDebug>
#include <QGridLayout>
#include "position.h"
#include "mainwindow.h"

class GameField : public QWidget
{
    Q_OBJECT
public:
    explicit GameField(QWidget *parent = 0);
    void draw(QPainter *painter);
    void drawSquare(QGridLayout *layout, int topLeftCorner, int bottomRightCorner);
    void initPositions(QGridLayout *layout);
    QWidget *getMainWindow();
    void paintEvent(QPaintEvent * event);


protected:
signals:

public slots:

    void restart();

private:
    Position *_positions[7][7];
    QWidget *mainWindow;
    QGridLayout *_gridLayout;

};

#endif // GAMEFIELD_H
