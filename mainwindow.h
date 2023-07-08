#pragma once

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "referee.h"
#include "utils.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Referee;
class MainWindow : public QMainWindow

{
    Q_OBJECT
    friend class Referee;

private:
    // private 变量
    Referee* refp;

    Ui::MainWindow *ui;
public:
    // public 变量


private:
    // private 函数


public:
    // public 函数
    MainWindow(Referee *parent = nullptr);
    ~MainWindow();
signals:


public slots:
    void paintEvent(QPaintEvent *event);


};

#endif // MAINWINDOW_H
