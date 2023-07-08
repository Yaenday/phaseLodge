#pragma once

#ifndef CUBICLE_H
#define CUBICLE_H

#include <QWidget>
#include "scene.h"
#include "item.h"
#include "utils.h"
#include "referee.h"
class Referee;
class Scene;
class Item;
class Cubicle : public QObject
{
    Q_OBJECT
    friend class referee;

private:
    // private 变量
    Referee* refp;
public:
    // public 变量
    QVector<Scene *> scenes;
    QVector<Item *> items_detail;
    QVector<Item *> items_simple;

private:
    // private 函数

public:
    // public 函数
    Cubicle(Referee* ref);
//    void setScene(Scene *scene);
//    void setItem(Item *item);

signals:

public slots:
};

#endif // CUBICLE_H
