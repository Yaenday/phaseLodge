#pragma once

#ifndef ITEM_H
#define ITEM_H

#include <QWidget>
#include "scene.h"
#include "cubicle.h"
#include "utils.h"
#include "referee.h"
class Referee;
class Cubicle;
class Scene;
class Item : public QObject
{
    Q_OBJECT
    friend class referee;

private:
    // private 变量
    Referee* refp;
    ItemType item_type; // 物品类型

    Cubicle *par_cubicle; // 所在的房间
    Scene *par_scene;     // 所在的场景


    QStringList discriptions; // 物品描述列表

public:
    // public 变量
    Scene *item_scene;    // 物体场景
private:
    // private 函数

public:
    // public 函数
    Item(Referee* ref,Cubicle *par_cub);
    Item(Referee* ref,Cubicle *par_cub, Scene *par_sce, QRect rectC2I, QRect rectI2D, QStringList dis, QString pic_address); // detail item
    Item(Referee* ref,Cubicle *par_cub, Scene *par_sce, QRect rectC2D, QStringList dis);                                        // simple item
    ~Item();
    void setItemBasic(QString pic_address, QStringList dis);
    void setItemDetail(ItemType type, QString pic_address, QRect rect, QStringList dis);

signals:

public slots:
};

#endif // ITEM_H





