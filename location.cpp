
#include "location.h"

QRect rect_C2C_welcome(QPoint(500, 600), QSize(300, 300));

QRect rect_Master_pic(QPoint(700, 50), QSize(600, 80));
QRect rect_Player_pic(QPoint(50, 50), QSize(80, 80));

QRect rect_avatar_pic(QPoint(1300, 50), QSize(80, 80));
QRect rect_avatar_name(QPoint(1300, 150), QSize(80, 80));

QRect rect_Player_energy(QPoint(1300, 200), QSize(80, 30));
QRect rect_Player_disorder(QPoint(1300, 250), QSize(80, 30));
QRect rect_Player_yinyang(QPoint(1300, 300), QSize(80, 30));

QSize C2CSize(50, 50);

QRect rect_C2C_frontHall_1_to_frontHall_2(QPoint(1050, 650), C2CSize);
QRect rect_C2C_frontHall_1_to_frontHall_3(QPoint(150, 650), C2CSize);
QRect rect_C2C_frontHall_1_to_frontHall_4(QPoint(700, 550), C2CSize);
QRect rect_C2C_frontHall_1_to_frontHall_5(QPoint(500, 550), C2CSize);
QRect rect_C2C_frontHall_1_to_frontHall_6(QPoint(900, 500), C2CSize);
QRect rect_C2C_frontHall_1_to_frontHall_7(QPoint(300, 500), C2CSize);

QRect rect_C2C_frontHall_2_to_frontHall_1(QPoint(50, 750), C2CSize);

QRect rect_C2C_frontHall_3_to_frontHall_1(QPoint(1150, 750), C2CSize);

QRect rect_C2C_frontHall_4_to_frontHall_1(QPoint(600, 600), C2CSize);
QRect rect_C2C_frontHall_4_to_frontHall_6(QPoint(100, 750), C2CSize);
QRect rect_C2C_frontHall_4_to_frontHall_7(QPoint(1150, 750), C2CSize);

QRect rect_C2C_frontHall_5_to_frontHall_1(QPoint(600, 600), C2CSize);
QRect rect_C2C_frontHall_5_to_frontHall_6(QPoint(100, 750), C2CSize);
QRect rect_C2C_frontHall_5_to_frontHall_7(QPoint(1100, 750), C2CSize);

QRect rect_C2C_frontHall_6_to_frontHall_1(QPoint(50, 750), C2CSize);
QRect rect_C2C_frontHall_6_to_frontHall_4(QPoint(350, 600), C2CSize);
QRect rect_C2C_frontHall_6_to_frontHall_5(QPoint(200, 650), C2CSize);
QRect rect_C2C_frontHall_6_to_backHall_1(QPoint(950, 650), C2CSize);

QRect rect_C2C_frontHall_7_to_frontHall_1(QPoint(1150, 750), C2CSize);
QRect rect_C2C_frontHall_7_to_frontHall_4(QPoint(1050, 600), C2CSize);
QRect rect_C2C_frontHall_7_to_frontHall_5(QPoint(1000, 450), C2CSize);
QRect rect_C2C_frontHall_7_to_backHall_3(QPoint(350, 500), C2CSize);

QRect rect_C2C_backHall_1_to_frontHall_6(QPoint(600, 750), C2CSize);
QRect rect_C2C_backHall_1_to_backHall_2(QPoint(200, 650), C2CSize);
QRect rect_C2C_backHall_1_to_eastBedroom_1(QPoint(1150, 600), C2CSize);
QRect rect_C2C_backHall_1_to_study_1(QPoint(700, 450), C2CSize);

QRect rect_C2C_backHall_2_to_backHall_1(QPoint(1150, 750), C2CSize);
QRect rect_C2C_backHall_2_to_backHall_3(QPoint(100, 750), C2CSize);
QRect rect_C2C_backHall_2_to_boneRoom_1(QPoint(100, 200), C2CSize);

QRect rect_C2C_backHall_3_to_frontHall_7(QPoint(600, 750), C2CSize);
QRect rect_C2C_backHall_3_to_backHall_2(QPoint(1150, 600), C2CSize);
QRect rect_C2C_backHall_3_to_westBedroom_1(QPoint(350, 650), C2CSize);

QRect rect_C2C_study_1_to_backHall_1(QPoint(300, 750), C2CSize);
QRect rect_C2C_study_1_to_study_2(QPoint(1150, 700), C2CSize);

QRect rect_C2C_study_2_to_study_1(QPoint(600, 750), C2CSize);

QRect rect_C2C_boneRoom_1_to_backHall_2(QPoint(200, 750), C2CSize);
QRect rect_C2C_boneRoom_1_to_boneRoom_2(QPoint(1150, 650), C2CSize);

QRect rect_C2C_boneRoom_2_to_boneRoom_1(QPoint(650, 750), C2CSize);

QRect rect_C2C_eastBedroom_1_to_backHall_1(QPoint(50, 750), C2CSize);

QRect rect_C2C_westBedroom_1_to_backHall_3(QPoint(1150, 750), C2CSize);

// rect for I2C
QSize I2CSize(100, 100);
QRect RECT_I2C(QPoint(0,0), I2CSize);

// rect for C2I // rect for I2D
QRect rect_C2I_frontHall2_to_fishTank(QPoint(450, 400), QSize(150, 150));
QRect rect_I2D_frontHall_2_finshTank(QPoint(400, 300), QSize(350, 250));

QRect rect_C2I_frontHall3_to_plants(QPoint(500, 150), QSize(350, 350));
QRect rect_I2D_frontHall_3_plants(QPoint(200, 0), QSize(750, 900));

QRect rect_C2I_frontHall6_to_cabinet(QPoint(400, 400), QSize(350, 200));
QRect rect_I2D_frontHall_6_cabinet(QPoint(100, 300), QSize(1050, 500));

QRect rect_C2I_frontHall7_to_cabinet(QPoint(550, 250), QSize(450, 250));
QRect rect_I2D_frontHall_7_cabinet(QPoint(100, 250), QSize(1100, 450));

QRect rect_C2I_backHall2_to_table(QPoint(0, 250), QSize(1150, 150));
QRect rect_I2D_backHall_2_table(QPoint(0, 200), QSize(1200, 550));

QRect rect_C2I_boneRoom1_to_cabinet(QPoint(350, 100), QSize(350, 400));
QRect rect_I2D_boneRoom_1_cabinet(QPoint(300, 50), QSize(650, 700));

QRect rect_C2I_boneRoom2_to_cabinet(QPoint(0, 0), QSize(350, 800));
QRect rect_I2D_boneRoom_2_cabinet(QPoint(0,0), QSize(1050, 700));

QRect rect_C2I_boneRoom2_to_cabinet2(QPoint(950, 0), QSize(300, 800));
QRect rect_I2D_boneRoom_2_cabinet2(QPoint(100, 100), QSize(1100, 850));

QRect rect_C2I_boneRoom2_to_box(QPoint(400, 350), QSize(100, 150));
QRect rect_I2D_boneRoom_2_box(QPoint(300, 400), QSize(600, 350));

QRect rect_C2I_boneRoom2_to_everything(QPoint(550, 250), QSize(250, 200));
QRect rect_I2D_boneRoom_2_everything(QPoint(100, 0), QSize(1100, 900));

QRect rect_C2I_study1_to_mirror(QPoint(50, 350), QSize(150, 250));
QRect rect_I2D_study_1_mirror(QPoint(450, 350), QSize(400, 350));

QRect rect_C2I_study1_to_shelf(QPoint(600, 250), QSize(150, 400));
QRect rect_I2D_study_1_shelf(QPoint(400, 100), QSize(350, 700));

QRect rect_C2I_study2_to_bookshelf_north(QPoint(900, 100), QSize(350, 600));
QRect rect_I2D_study_2_bookshelf_north(QPoint(50, 150), QSize(1050, 700));

QRect rect_C2I_study2_to_bookshelf_south(QPoint(0, 100), QSize(350, 600));
QRect rect_I2D_study_2_bookshelf_south(QPoint(50, 150), QSize(1050, 700));

QRect rect_C2I_study2_to_box(QPoint(350, 300), QSize(100, 150));
QRect rect_I2D_study_2_box(QPoint(250, 200), QSize(700, 550));

QRect rect_C2I_study2_to_everything(QPoint(450, 300), QSize(350, 150));
QRect rect_I2D_study_2_everything(QPoint(0, 600), QSize(1200, 250));

QRect rect_C2I_eastBedroom1_to_bed(QPoint(600, 300), QSize(250, 100));
QRect rect_I2D_eastBedroom_1_bed(QPoint(350, 300), QSize(600, 350));

QRect rect_C2I_eastBedroom2_to_bed(QPoint(950, 100), QSize(300, 500));
QRect rect_I2D_eastBedroom_2_bed(QPoint(100, 100), QSize(1100, 550));

QRect rect_C2I_westBedroom1_to_bed(QPoint(600, 250), QSize(650, 200));
QRect rect_I2D_westBedroom_1_bed(QPoint(500, 300), QSize(250, 100));

// rect for C2D

QRect rect_C2D_frontHall1_to_clock(QPoint(550, 300), QSize(150, 100));
QRect rect_C2D_frontHall1_to_chair(QPoint(400, 400), QSize(150, 100));
QRect rect_C2D_frontHall1_to_table(QPoint(550, 450), QSize(150, 100));
QRect rect_C2D_frontHall2_to_pingfeng(QPoint(250, 250), QSize(50, 400));
QRect rect_C2D_backHall1_to_pingfeng(QPoint(50, 250), QSize(400, 400));

