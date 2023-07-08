#pragma once

#ifndef LODGE_H
#define LODGE_H

#include <QWidget>
#include "cubicle.h" //屋子
#include "item.h"    //物品
#include "referee.h"
#include "mainwindow.h" //演示
#include "scene.h"      //场景
#include "utils.h"
class Referee;
class Cubicle;
class Lodge : public QObject
{
    Q_OBJECT
    friend class Referee;

private:
    // private 变量
    Referee *refp;

    QString cubicle_scenes = "cubicle_scenes";
    QString cubicle_items = "cubicle_items";
    QString cubicle_connections = "cubicle_connections";
    QString cubicle_description = "cubicle_description";

    Cubicle *frontHall;
    Cubicle *backHall;
    Cubicle *study;
    Cubicle *boneRoom;
    Cubicle *eastBedRoom;
    Cubicle *westBedRoom;

public:
    // public 变量

private:
    // private 函数
    void InitializeCubicles();
    void InitializeItems();
    void InitializeConnections();
    // 初始化各个房间的场景
    void Initialize();

public:
    // public 函数
    Lodge(Referee* ref);
    ~Lodge();

signals:

public slots:
};

#endif // LODGE_H
