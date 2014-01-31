#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QBoxLayout>
#include <QLabel>
#include <QPainter>
#include <QDebug>
#include "gamefield.h"
#include "position.h"


class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QPushButton *initButton;
    QLabel *_labelInfo;
};

#endif // MAINWINDOW_H
