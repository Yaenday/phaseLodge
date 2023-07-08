#pragma once

#ifndef MASTER_H
#define MASTER_H

#include <QObject>
#include "utils.h"
#include "referee.h"
class Referee;
class Scene;
class Master
{
    friend class referee;

private:
    // private 变量
    Referee *refp;

public:
    // public 变量
    QPixmap *masterImage;

private:
    // private 函数

public:
    // public 函数
    Master(Referee *ref,QString pic_address);
    bool hasMasterDialog(Scene *now);
    QStringList getMasterDialog(Scene *now);

signals:

public slots:
};

#endif // MASTER_H
