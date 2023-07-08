#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include "utils.h"
#include "referee.h"
class Referee;
class Player
{
    friend class referee;

private:
    // private 变量
    int energy;
    int disorder;
    int yinyang;

public:
    // public 变量
    QPixmap playerImage;
    Referee *refp;

private:
    // private 函数

public:
    // public 函数
    Player(Referee *ref, QString pic_address);
    ~Player();
    void initialize();
    void re_initialize(bool newPlayer);

    int get_energy();
    int get_disorder();
    int get_yinyang();

    void change_energy(int delta);
    void change_disorder(int delta);
    void change_yinyang(int delta);
signals:

public slots:
};

#endif // PLAYER_H
