#pragma once

#ifndef UTILS_H
#define UTILS_H

#include <bits/stdc++.h>
#include <Qstring>
#include <QDebug>
#include <QPixmap>
#include <QString>
#include <QPainter>
#include <QWidget>
#include <QObject>
#include <QStackedWidget>
#include <QApplication>
#include <QVector>
#include <QList>
#include <QFile>
#include <QTimer>
#include <QTime>
#include <QPushButton>
#include <QLabel>
#include "address.h"
#include "dictionary.h"
#include "location.h"

using namespace std;

// 游戏状态
enum GameState
{
    kStart,
    kSetting,
    kRunning,
    kEnd,
    kWin
};

// 人物状态
enum PlayerState
{
    kPlayer,
    kMaster
};

// 场景模式：非游戏场景，纵观场景、物品场景、物品详情场景
enum SceneMode
{
    kNone,
    kCubicle,
    kItem
};

// 房间地点：开始界面，前厅，后厅，书房，骨房，东卧室，西卧室
enum CubicleMode
{
    kStartCubicle,
    kFrontHall,
    kBackHall,
    kStudy,
    kBoneRoom,
    kEastBedroom,
    kWestBedroom
};

// Button 设置
enum ButtomType
{
    kStartButton,
    kSettingButton,
    kExitButton,
    kBackButton,

    kNoneButton,
    kC2CButton,
    kC2IButton,
    kI2CButton,
};

// arrow type
enum ArrowType
{
    kNoArrow,
    kLeftArrow,
    kRightArrow,
    kUpArrow,
    kDownArrow,
    kLeftUpArrow,
    kLeftDownArrow,
    kRightUpArrow,
    kRightDownArrow
};

enum ItemType
{
    kNoItem,
    kDetailItem,
    kSimpleItem
};

// 场景
enum SceneType
{
    kNoScene,
    kWelcomeScene,
    kSucceedScene,
    kFailScene,

    kFrontHall_1,
    kFrontHall_2,
    kFrontHall_3,
    kFrontHall_4,
    kFrontHall_5,
    kFrontHall_6,
    kFrontHall_7,

    kBackHall_1,
    kBackHall_2,
    kBackHall_3,

    kStudy_1,
    kStudy_2,

    kBoneRoom_1,
    kBoneRoom_2,

    kEastBedroom_1,

    kWestBedroom_1,

};

// 场景界面窗口大小
const int SCENE_WINDOW_WIDTH = 1400;
const int SCENE_WINDOW_HEIGHT = 850;

// 设置界面窗口大小
const int SETTING_WINDOW_WIDTH = 600;
const int SETTING_WINDOW_HEIGHT = 400;

// 画图窗口大小
const int DRAW_WINDOW_WIDTH = 1250;
const int DRAW_WINDOW_HEIGHT = 850;

// 按钮大小
const int BUTTON_C2C_WIDTH = 50;
const int BUTTON_C2C_HEIGHT = 50;

extern QString get_address_of_arrow_icon(ArrowType arrow_type);

extern QSize get_arrow_icon_size(ArrowType arrow_type);

extern ButtomType get_button_type(QString classname_1, QString classname_2);

extern QString get_classname(QObject *object);

#endif // UTILS_H
