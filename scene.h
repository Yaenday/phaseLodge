#pragma once

#ifndef SCENE_H
#define SCENE_H

#include <QMainWindow>
#include "cubicle.h" //屋子
#include "referee.h"
#include "item.h"    //物品
#include "utils.h"
class Referee;
class Scene : public QWidget
{
    Q_OBJECT
    friend class referee;

private:
    // private 变量
    Referee* refp;
    SceneMode mode;
    QObject *par_ptr;
    QVector<QPushButton *> buttons;
    QPixmap image;
    QStringList discriptions;

public:
    // public 变量
private:
    // private 函数

public:
    // public 函数
    Scene(Referee* ref);
    Scene(Referee* ref, QObject *par, QString img_address, QStringList dis);
    void setSceneBasic(QPixmap img, QStringList dis);

    void setMode(SceneMode mod);
    void setImage(QPixmap img);
    void setDiscription(QStringList dis);

    bool operator==(const Scene& other) const;

    SceneMode getMode();
    QPixmap getImage();
    QStringList getDiscription();
    // 场景to场景按钮
    // void setButton(Scene *toScene, QRect rect, ArrowType atype = ArrowType::kNoArrow);
    // // 场景to文字按钮
    // void setButton(QStringList dis, QRect rect, ArrowType atype = ArrowType::kNoArrow);

    void setButtonC2C(Scene *toScene, QRect rect, ArrowType atype); // 场景到场景
    void setButtonI2D(QStringList dis, QRect rect);                 // 物品到文字
    void setButtonC2D(QStringList dis, QRect rect);                 // 场景到文字
    void setButtonC2I(Scene *toScene, QRect rect);
    void setButtonI2C(Scene *toScene, QRect rect);

signals:
//    void signal_C2C(const Scene* s1,const Scene* s2);
//    void signal_C2I(const Scene* s1,const Scene* s2);
//    void signal_I2C(const Scene* s1,const Scene* s2);
//    void signal_I2D(QStringList dis);
//    void signal_C2D(QStringList dis);
public slots:
};

#endif // SCENE_H
