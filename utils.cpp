
#include "utils.h"

QString get_address_of_arrow_icon(ArrowType arrow_type)
{
    QString arrow_address;
    if (arrow_type == kLeftArrow)
        arrow_address = arrow_left_pic_address;
    else if (arrow_type == kRightArrow)
        arrow_address = arrow_right_pic_address;
    else if (arrow_type == kUpArrow)
        arrow_address = arrow_up_pic_address;
    else if (arrow_type == kDownArrow)
        arrow_address = arrow_down_pic_address;
    else if (arrow_type == kLeftUpArrow)
        arrow_address = arrow_left_up_pic_address;
    else if (arrow_type == kLeftDownArrow)
        arrow_address = arrow_left_down_pic_address;
    else if (arrow_type == kRightUpArrow)
        arrow_address = arrow_right_up_pic_address;
    else if (arrow_type == kRightDownArrow)
        arrow_address = arrow_right_down_pic_address;
    return arrow_address;
}

QSize get_arrow_icon_size(ArrowType arrow_type)
{
    return QSize(BUTTON_C2C_WIDTH, BUTTON_C2C_HEIGHT);
}

ButtomType get_button_type(QString classname_1, QString classname_2)
{
    ButtomType type;
    if (classname_1 == "Cubicle" && classname_2 == "Cubicle")
        type = kC2CButton;
    else if (classname_1 == "Cubicle" && classname_2 == "Item")
        type = kC2IButton;
    else if (classname_1 == "Item" && classname_2 == "Cubicle")
        type = kI2CButton;
    else
        type = kNoneButton;
    return type;
}

QString get_classname(QObject *object)
{
    QString classname = object->metaObject()->className();
    return classname;
}

