
#include "lodge.h"
#include "address.h"
#include "dictionary.h"
#include "location.h"

Lodge::Lodge(Referee *ref)
{
    refp = ref;
    Initialize();
}

void Lodge::Initialize()
{
    InitializeCubicles();
    InitializeItems();
    InitializeConnections();
}

Lodge::~Lodge()
{
    delete frontHall;
    delete backHall;
    delete study;
    delete boneRoom;
    delete eastBedRoom;
    delete westBedRoom;
}

void Lodge::InitializeCubicles()
{
    frontHall = new Cubicle(refp);
    backHall = new Cubicle(refp);
    study = new Cubicle(refp);
    boneRoom = new Cubicle(refp);
    eastBedRoom = new Cubicle(refp);
    westBedRoom = new Cubicle(refp);
    // frontHall(7个Scene), backHall(3个Scene), study(2个Scene), boneRoom(2个Scene), eastBedroom(1个Scene), westBedroom(1个Scene)的初始化
    // frontHall 7个场景
    frontHall->scenes.push_back(new Scene(refp));
    qDebug() << "InitializeCubicles";
    frontHall->scenes.push_back(new Scene(refp, frontHall, frontHall_scene1_pic_address, qstringlist_frontHall1_text));
    qDebug() << "InitializeCubicles";
    frontHall->scenes.push_back(new Scene(refp, frontHall, frontHall_scene2_pic_address, qstringlist_frontHall2_text));
    frontHall->scenes.push_back(new Scene(refp, frontHall, frontHall_scene3_pic_address, qstringlist_frontHall3_text));
    frontHall->scenes.push_back(new Scene(refp, frontHall, frontHall_scene4_pic_address, qstringlist_frontHall4_text));
    frontHall->scenes.push_back(new Scene(refp, frontHall, frontHall_scene5_pic_address, qstringlist_frontHall5_text));
    frontHall->scenes.push_back(new Scene(refp, frontHall, frontHall_scene6_pic_address, qstringlist_frontHall6_text));
    frontHall->scenes.push_back(new Scene(refp, frontHall, frontHall_scene7_pic_address, qstringlist_frontHall7_text));
    qDebug() << "InitializeCubicles";
    // backHall 3个场景
    backHall->scenes.push_back(new Scene(refp));
    backHall->scenes.push_back(new Scene(refp, backHall, backHall_scene1_pic_address, qstringlist_backHall1_text));
    backHall->scenes.push_back(new Scene(refp, backHall, backHall_scene2_pic_address, qstringlist_backHall2_text));
    backHall->scenes.push_back(new Scene(refp, backHall, backHall_scene3_pic_address, qstringlist_backHall3_text));
    // study 2个场景
    study->scenes.push_back(new Scene(refp));
    study->scenes.push_back(new Scene(refp, study, study_scene1_pic_address, qstringlist_study1_text));
    study->scenes.push_back(new Scene(refp, study, study_scene2_pic_address, qstringlist_study2_text));
    // boneRoom 2个场景
    boneRoom->scenes.push_back(NULL);
    boneRoom->scenes.push_back(new Scene(refp, boneRoom, boneRoom_scene1_pic_address, qstringlist_boneRoom1_text));
    boneRoom->scenes.push_back(new Scene(refp, boneRoom, boneRoom_scene2_pic_address, qstringlist_boneRoom2_text));
    // eastBedRoom 1个场景
    eastBedRoom->scenes.push_back(NULL);
    eastBedRoom->scenes.push_back(new Scene(refp, eastBedRoom, eastBedRoom_scene1_pic_address, qstringlist_eastBedRoom1_text));
    // westBedRoom 1个场景
    westBedRoom->scenes.push_back(NULL);
    westBedRoom->scenes.push_back(new Scene(refp, westBedRoom, westBedRoom_scene1_pic_address, qstringlist_westBedRoom1_text));
    qDebug() << "InitializeCubicles";
}

void Lodge::InitializeItems()
{
    //    qDebug()<<"InitializeItems";
    // Initialize Items in detail
    // frontHall 4个物品
    frontHall->items_detail.push_back(NULL);
    frontHall->items_detail.push_back(new Item(refp, frontHall, frontHall->scenes[2], rect_C2I_frontHall2_to_fishTank, rect_I2D_frontHall_2_finshTank, qstringlist_frontHall2_fishTank_text, frontHall2_fishTank_pic_address));
    frontHall->items_detail.push_back(new Item(refp, frontHall, frontHall->scenes[3], rect_C2I_frontHall3_to_plants, rect_I2D_frontHall_3_plants, qstringlist_frontHall3_plants_text, frontHall3_plants_pic_address));
    frontHall->items_detail.push_back(new Item(refp, frontHall, frontHall->scenes[6], rect_C2I_frontHall6_to_cabinet, rect_I2D_frontHall_6_cabinet, qstringlist_frontHall6_cabinet_text, frontHall6_cabinet_pic_address));
    frontHall->items_detail.push_back(new Item(refp, frontHall, frontHall->scenes[7], rect_C2I_frontHall7_to_cabinet, rect_I2D_frontHall_7_cabinet, qstringlist_frontHall7_cabinet_text, frontHall7_cabinet_pic_address));

    // backHall 1个物品
    backHall->items_detail.push_back(NULL);
    backHall->items_detail.push_back(new Item(refp, backHall, backHall->scenes[2], rect_C2I_backHall2_to_table, rect_I2D_backHall_2_table, qstringlist_backHall2_table_text, backHall2_table_pic_address));

    // boneRoom 5个物品
    boneRoom->items_detail.push_back(NULL);
    boneRoom->items_detail.push_back(new Item(refp, boneRoom, boneRoom->scenes[1], rect_C2I_boneRoom1_to_cabinet, rect_I2D_boneRoom_1_cabinet, qstringlist_boneRoom1_cabinet_text, boneRoom1_cabinet_pic_address));
    boneRoom->items_detail.push_back(new Item(refp, boneRoom, boneRoom->scenes[2], rect_C2I_boneRoom2_to_cabinet, rect_I2D_boneRoom_2_cabinet, qstringlist_boneRoom2_cabinet_north_text, boneRoom2_cabinet_pic_address));
    boneRoom->items_detail.push_back(new Item(refp, boneRoom, boneRoom->scenes[2], rect_C2I_boneRoom2_to_cabinet2, rect_I2D_boneRoom_2_cabinet2, qstringlist_boneRoom2_cabinet_south_text, boneRoom2_cabinet2_pic_address));
    boneRoom->items_detail.push_back(new Item(refp, boneRoom, boneRoom->scenes[2], rect_C2I_boneRoom2_to_box, rect_I2D_boneRoom_2_box, qstringlist_boneRoom2_box_text, boneRoom2_box_pic_address));
    boneRoom->items_detail.push_back(new Item(refp, boneRoom, boneRoom->scenes[2], rect_C2I_boneRoom2_to_everything, rect_I2D_boneRoom_2_everything, qstringlist_boneRoom2_everything_text, boneRoom2_everything_pic_address));

    // study 5个物品
    // study 5个物品
    study->items_detail.push_back(NULL);
    study->items_detail.push_back(new Item(refp, study, study->scenes[1], rect_C2I_study1_to_mirror, rect_I2D_study_1_mirror, qstringlist_study1_mirror_text, study1_lamp_pic_address));
    study->items_detail.push_back(new Item(refp, study, study->scenes[1], rect_C2I_study1_to_shelf, rect_I2D_study_1_shelf, qstringlist_study2_bookshelf_north_text, study1_bookshelf_pic_address));
    study->items_detail.push_back(new Item(refp, study, study->scenes[2], rect_C2I_study2_to_bookshelf_north, rect_I2D_study_2_bookshelf_north, qstringlist_study2_bookshelf_north_text, study2_bookshelf_pic_address));
    study->items_detail.push_back(new Item(refp, study, study->scenes[2], rect_C2I_study2_to_bookshelf_south, rect_I2D_study_2_bookshelf_south, qstringlist_study2_bookshelf_south_text, study2_bookshelf2_pic_address));

    study->items_detail.push_back(new Item(refp, study, study->scenes[2], rect_C2I_study2_to_box, rect_I2D_study_2_box, qstringlist_study2_box_text, study2_box_pic_address));
    study->items_detail.push_back(new Item(refp, study, study->scenes[2], rect_C2I_study2_to_everything, rect_I2D_study_2_everything, qstringlist_study2_desk_text, study2_desk_pic_address));

    // eastBedroom 2个物品
    eastBedRoom->items_detail.push_back(NULL);
    eastBedRoom->items_detail.push_back(new Item(refp, eastBedRoom, eastBedRoom->scenes[1], rect_C2I_eastBedroom1_to_bed, rect_I2D_eastBedroom_1_bed, qstringlist_eastBedroom_box_text, eastBedroom_box_pic_address));
    eastBedRoom->items_detail.push_back(new Item(refp, eastBedRoom, eastBedRoom->scenes[1], rect_C2I_eastBedroom2_to_bed, rect_I2D_eastBedroom_2_bed, qstringlist_eastBedroom_cabinet_text, eastBedroom_cabinet_pic_address));

    // westBedroom 1个物品
    westBedRoom->items_detail.push_back(NULL);
    westBedRoom->items_detail.push_back(new Item(refp, westBedRoom, westBedRoom->scenes[1], rect_C2I_westBedroom1_to_bed, rect_I2D_westBedroom_1_bed, qstringlist_westBedroom_box_text, westBedroom_box_pic_address));

    // Initialize Items in simple
    frontHall->items_simple.push_back(NULL);
    frontHall->items_simple.push_back(new Item(refp, frontHall, frontHall->scenes[1], rect_C2D_frontHall1_to_clock, qstringlist_frontHall1_clock_text));
    frontHall->items_simple.push_back(new Item(refp, frontHall, frontHall->scenes[1], rect_C2D_frontHall1_to_chair, qstringlist_frontHall1_chair_text));
    frontHall->items_simple.push_back(new Item(refp, frontHall, frontHall->scenes[1], rect_C2D_frontHall1_to_table, qstringlist_frontHall1_table_text));
    frontHall->items_simple.push_back(new Item(refp, frontHall, frontHall->scenes[2], rect_C2D_frontHall2_to_pingfeng, qstringlist_frontHall2_pingfeng_text));
    backHall->items_simple.push_back(new Item(refp, backHall, backHall->scenes[1], rect_C2D_backHall1_to_pingfeng, qstringlist_backHall1_pingfeng_text));
}

void Lodge::InitializeConnections()
{

    //    qDebug() << "InitializeConnections()"; // 各个场景转移关系

    // 从frontHall_1出发
    // frontHall_1->frontHall_2,frontHall_1->frontHall_3,frontHall_1->frontHall_4,frontHall_1->frontHall_5,frontHall_1->frontHall_6,frontHall_1->frontHall_7
    // 从frontHall_2出发
    // frontHall_2->frontHall_1
    // 从frontHall_3出发
    // frontHall_3->frontHall_1
    // 从frontHall_4出发
    // frontHall_4->frontHall_1,frontHall_4->frontHall_6,frontHall_4->frontHall_7
    // 从frontHall_5出发
    // frontHall_5->frontHall_1,frontHall_5->frontHall_6,frontHall_5->frontHall_7
    // 从frontHall_6出发
    // frontHall_6->frontHall_1,frontHall_6->frontHall_4,frontHall_6->frontHall_5,frontHall_6->backHall_1
    // 从frontHall_7出发
    // frontHall_7->frontHall_1,frontHall_7->frontHall_4,frontHall_7->frontHall_5,frontHall_7->backHall_3

    // 从backHall_1出发
    // backHall_1->frontHall_6,backHall_1->backHall_2,backHall_1->eastBedroom_1,backHall_1->study_1
    // 从backHall_2出发
    // backHall_2->backHall_1,backHall_2->backHall_3,backHall_2->boneRoom_1
    // 从backHall_3出发
    // backHall_3->frontHall_7,backHall_3->backHall_2,backHall_3->westBedroom_1

    // 从study_1出发
    // study_1->backHall_1,study_1->study_2
    // 从study_2出发
    // study_2->study_1

    // 从boneRoom_1出发
    // boneRoom_1->backHall_2,boneRoom_1->boneRoom_2
    // 从boneRoom_2出发
    // boneRoom_2->boneRoom_1

    // 从eastBedroom_1出发
    // eastBedroom_1->backHall_1

    // 从westBedroom_1出发
    // westBedroom_1->backHall_3

    // Initialize_frontHall_1
    //  frontHall_1共有6个button，分别去往frontHall_2、frontHall_3、frontHall_4、frontHall_5、frontHall_6、frontHall_7
    frontHall->scenes[1]->setButtonC2C(frontHall->scenes[2], rect_C2C_frontHall_1_to_frontHall_2, ArrowType::kRightArrow);
    frontHall->scenes[1]->setButtonC2C(frontHall->scenes[3], rect_C2C_frontHall_1_to_frontHall_3, ArrowType::kLeftArrow);
    frontHall->scenes[1]->setButtonC2C(frontHall->scenes[4], rect_C2C_frontHall_1_to_frontHall_4, ArrowType::kRightUpArrow);
    frontHall->scenes[1]->setButtonC2C(frontHall->scenes[5], rect_C2C_frontHall_1_to_frontHall_5, ArrowType::kLeftUpArrow);
    frontHall->scenes[1]->setButtonC2C(frontHall->scenes[6], rect_C2C_frontHall_1_to_frontHall_6, ArrowType::kRightArrow);
    frontHall->scenes[1]->setButtonC2C(frontHall->scenes[7], rect_C2C_frontHall_1_to_frontHall_7, ArrowType::kLeftArrow);

    // Initialize_frontHall_2
    // frontHall_2共有1个button，分别去往frontHall_1
    frontHall->scenes[2]->setButtonC2C(frontHall->scenes[1], rect_C2C_frontHall_2_to_frontHall_1, ArrowType::kLeftArrow);

    // Initialize_frontHall_3
    // frontHall_3共有1个button，分别去往frontHall_1
    frontHall->scenes[3]->setButtonC2C(frontHall->scenes[1], rect_C2C_frontHall_3_to_frontHall_1, ArrowType::kRightArrow);

    // Initialize_frontHall_4
    // frontHall_4共有3个button，分别去往frontHall_1、frontHall_6、frontHall_7
    frontHall->scenes[4]->setButtonC2C(frontHall->scenes[1], rect_C2C_frontHall_4_to_frontHall_1, ArrowType::kUpArrow);
    frontHall->scenes[4]->setButtonC2C(frontHall->scenes[6], rect_C2C_frontHall_4_to_frontHall_6, ArrowType::kLeftArrow);
    frontHall->scenes[4]->setButtonC2C(frontHall->scenes[7], rect_C2C_frontHall_4_to_frontHall_7, ArrowType::kRightArrow);

    // Initialize_frontHall_5
    // frontHall_5共有3个button，分别去往frontHall_1、frontHall_6、frontHall_7
    frontHall->scenes[5]->setButtonC2C(frontHall->scenes[1], rect_C2C_frontHall_5_to_frontHall_1, ArrowType::kUpArrow);
    frontHall->scenes[5]->setButtonC2C(frontHall->scenes[6], rect_C2C_frontHall_5_to_frontHall_6, ArrowType::kLeftArrow);
    frontHall->scenes[5]->setButtonC2C(frontHall->scenes[7], rect_C2C_frontHall_5_to_frontHall_7, ArrowType::kRightArrow);

    // Initialize_frontHall_6
    // frontHall_6共有4个button，分别去往frontHall_1、frontHall_4、frontHall_5、backHall_1
    frontHall->scenes[6]->setButtonC2C(frontHall->scenes[1], rect_C2C_frontHall_6_to_frontHall_1, ArrowType::kLeftArrow);
    frontHall->scenes[6]->setButtonC2C(frontHall->scenes[4], rect_C2C_frontHall_6_to_frontHall_4, ArrowType::kLeftUpArrow);
    frontHall->scenes[6]->setButtonC2C(frontHall->scenes[5], rect_C2C_frontHall_6_to_frontHall_5, ArrowType::kLeftArrow);
    frontHall->scenes[6]->setButtonC2C(backHall->scenes[1], rect_C2C_frontHall_6_to_backHall_1, ArrowType::kRightUpArrow);

    // Initialize_frontHall_7
    // frontHall_7共有4个button，分别去往frontHall_1、frontHall_4、frontHall_5、backHall_3
    frontHall->scenes[7]->setButtonC2C(frontHall->scenes[1], rect_C2C_frontHall_7_to_frontHall_1, ArrowType::kRightArrow);
    frontHall->scenes[7]->setButtonC2C(frontHall->scenes[4], rect_C2C_frontHall_7_to_frontHall_4, ArrowType::kRightArrow);
    frontHall->scenes[7]->setButtonC2C(frontHall->scenes[5], rect_C2C_frontHall_7_to_frontHall_5, ArrowType::kRightUpArrow);
    frontHall->scenes[7]->setButtonC2C(backHall->scenes[3], rect_C2C_frontHall_7_to_backHall_3, ArrowType::kLeftUpArrow);

    // Initialize_backHall_1
    // backHall_1共有4个button，分别去往frontHall_6、backHall_2、study_1、eastBedroom_1
    backHall->scenes[1]->setButtonC2C(frontHall->scenes[6], rect_C2C_backHall_1_to_frontHall_6, ArrowType::kDownArrow);
    backHall->scenes[1]->setButtonC2C(backHall->scenes[2], rect_C2C_backHall_1_to_backHall_2, ArrowType::kLeftArrow);
    backHall->scenes[1]->setButtonC2C(study->scenes[1], rect_C2C_backHall_1_to_study_1, ArrowType::kUpArrow);
    backHall->scenes[1]->setButtonC2C(eastBedRoom->scenes[1], rect_C2C_backHall_1_to_eastBedroom_1, ArrowType::kRightUpArrow);

    // Initialize_backHall_2
    // backHall_2共有3个button，分别去往backHall_1、backHall_3、boneRoom_1
    backHall->scenes[2]->setButtonC2C(backHall->scenes[1], rect_C2C_backHall_2_to_backHall_1, ArrowType::kRightArrow);
    backHall->scenes[2]->setButtonC2C(backHall->scenes[3], rect_C2C_backHall_2_to_backHall_3, ArrowType::kLeftArrow);
    backHall->scenes[2]->setButtonC2C(boneRoom->scenes[1], rect_C2C_backHall_2_to_boneRoom_1, ArrowType::kUpArrow);

    // Initialize_backHall_3
    // backHall_3共有3个button，分别去往frontHall_7、backHall_2、westBedroom_1
    backHall->scenes[3]->setButtonC2C(frontHall->scenes[7], rect_C2C_backHall_3_to_frontHall_7, ArrowType::kDownArrow);
    backHall->scenes[3]->setButtonC2C(backHall->scenes[2], rect_C2C_backHall_3_to_backHall_2, ArrowType::kRightArrow);
    backHall->scenes[3]->setButtonC2C(westBedRoom->scenes[1], rect_C2C_backHall_3_to_westBedroom_1, ArrowType::kLeftUpArrow);

    // Initialize_study_1
    // study_1共有2个button，分别去往backHall_1、study_2
    study->scenes[1]->setButtonC2C(backHall->scenes[1], rect_C2C_study_1_to_backHall_1, ArrowType::kDownArrow);
    study->scenes[1]->setButtonC2C(study->scenes[2], rect_C2C_study_1_to_study_2, ArrowType::kRightArrow);

    // Initialize_study_2
    // study_2共有1个button，分别去往study_1
    study->scenes[2]->setButtonC2C(study->scenes[1], rect_C2C_study_2_to_study_1, ArrowType::kDownArrow);

    // Initialize_boneRoom_1
    // boneRoom_1共有2个button，分别去往backHall_2、boneRoom_2
    boneRoom->scenes[1]->setButtonC2C(backHall->scenes[2], rect_C2C_boneRoom_1_to_backHall_2, ArrowType::kDownArrow);
    boneRoom->scenes[1]->setButtonC2C(boneRoom->scenes[2], rect_C2C_boneRoom_1_to_boneRoom_2, ArrowType::kRightArrow);

    // Initialize_boneRoom_2
    // boneRoom_2共有1个button，分别去往boneRoom_1
    boneRoom->scenes[2]->setButtonC2C(boneRoom->scenes[1], rect_C2C_boneRoom_2_to_boneRoom_1, ArrowType::kDownArrow);

    // Initialize_eastBedroom_1
    // eastBedroom_1共有1个button，分别去往backHall_1
    eastBedRoom->scenes[1]->setButtonC2C(backHall->scenes[1], rect_C2C_eastBedroom_1_to_backHall_1, ArrowType::kLeftArrow);

    // Initialize_westBedroom_1
    // westBedroom_1共有1个button，分别去往backHall_3
    westBedRoom->scenes[1]->setButtonC2C(backHall->scenes[3], rect_C2C_westBedroom_1_to_backHall_3, ArrowType::kRightArrow);
}
