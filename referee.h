#pragma once

#ifndef REFEREE_H
#define REFEREE_H

#include <QObject>

#include "lodge.h"      //房子
#include "cubicle.h"    //屋子
#include "item.h"       //物品
#include "mainwindow.h" //演示
#include "scene.h"      //场景
#include "player.h"     //玩家
#include "master.h"     //李阴阳
#include "utils.h"      //工具

class MainWindow;
class QStackedWidget;
class Lodge;
class Scene;
class Item;
class Cubicle;
class Player;
class Master;

class Referee : public QObject
{
    friend class MainWindow;

private:
    // private 变量

    Lodge *lodge;
    Player *player;
    Master *Li;
    Scene *welcome;
    MainWindow *mainwindow;

public:
    // public 变量
    QStackedWidget *stackedScene;

private:
    // private 函数

public:
    // public 函数
    Referee(QObject *parent = nullptr);
    ~Referee();
    void InitializeGame();
    void InitializeWelcome();
    void InitializeLodge();
    void InitializePlayer(bool newPlayer);
    void InitializeConnections();
    void Manipulate(Scene *fromWidget, Scene *toWidget);   // 切换界面并操纵血量
    void Manipulate(Scene *now, QStringList descriptions); // 输出语句并操纵血量
    bool changePlayer(int x, int y, int z);                // 检查血量并操纵血量
    bool isSameScene(Scene *s1, Scene *s2);
    QStringList getQSLsentence(QStringList origin, int from, int to);
    Scene *getCurrentScene();
signals:

public slots:
    //    void doShowScene(QWidget *fromWidget, QWidget *toWidget);
    void doShowScene(Scene *toWidget);
    void doShowDiscription(QStringList descriptions);
    int doShowDialog(PlayerState kstat, QStringList descriptions);
};

#endif // REFEREE_H
