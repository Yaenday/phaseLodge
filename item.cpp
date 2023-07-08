
#include "item.h"
#include "location.h"

Item::Item(Referee* ref,Cubicle *par_cube)
{
    refp = ref;
    par_cubicle = par_cube;
    item_type = ItemType::kNoItem;
}

// detail item
Item::Item(Referee* ref,Cubicle *par_cub, Scene *par_sce, QRect rectC2I, QRect rectI2D, QStringList dis, QString pic_address)
{
    refp =ref;
    par_cubicle = par_cub;
    par_scene = par_sce;
    item_type = ItemType::kDetailItem;
    discriptions = dis;
    item_scene = new Scene(refp,this, pic_address, discriptions);
    par_scene->setButtonC2I(item_scene, rectC2I);    // CS to IS button
    item_scene->setButtonI2C(par_scene, RECT_I2C);   // IS to CS button
    item_scene->setButtonI2D(discriptions, rectI2D); // IS to DS button
}

// simple item
Item::Item(Referee* ref,Cubicle *par_cub, Scene *par_sce, QRect rectC2D, QStringList dis)
{
    refp =ref;
    par_cubicle = par_cub;
    par_scene = par_sce;
    item_type = ItemType::kSimpleItem;
    discriptions = dis;
    par_scene->setButtonC2D(discriptions, rectC2D); // CS to IS button
}

Item::~Item()
{
    delete item_scene;
}
