
#include "referee.h"
#include "address.h"
#include "utils.h"
#include <QRandomGenerator>
#include <QtGlobal>

Referee::Referee(QObject *parent)
    : QObject{parent}
{
    InitializeGame();
    InitializeConnections();
}

Referee::~Referee()
{
    delete mainwindow;
    delete stackedScene;
    delete lodge;
    delete player;
    delete Li;
    delete welcome;
}

void Referee::InitializeGame()
{
    mainwindow = new MainWindow(this);
    mainwindow->setFixedSize(SCENE_WINDOW_WIDTH, SCENE_WINDOW_HEIGHT);
    stackedScene = new QStackedWidget(mainwindow);
    mainwindow->setCentralWidget(stackedScene);
    qDebug() << "InitializeLodge";
    InitializeLodge();
    qDebug() << "InitializePlayer";
    InitializePlayer(true);
    qDebug() << "InitializeWelcome";
    InitializeWelcome();
    mainwindow->show();
    mainwindow->setWindowTitle("地相庐");
    mainwindow->repaint();
}

void Referee::InitializeWelcome()
{
    welcome = new Scene(this, this, welcome_pic_address, qstringlist_welcome_text);
    welcome->setButtonC2C(lodge->frontHall->scenes[1], rect_C2C_welcome, ArrowType::kLeftArrow);
    stackedScene->addWidget(welcome);
    stackedScene->setCurrentWidget(welcome);
}

void Referee::InitializeLodge()
{
    lodge = new Lodge(this);
}

void Referee::InitializePlayer(bool newPlayer)
{
    if (newPlayer)
    {
        player = new Player(this, player_pic_address);
        Li = new Master(this, master_pic_address);
    }
    else
        player->re_initialize(false);
}

void Referee::InitializeConnections()
{
    //    connect,&Scene::signal_C2C,&Referee::doShowScene);
    //    connect(Scene,&Scene::signal_C2I,&Referee::doShowScene);
    //    connect(Scene,&Scene::signal_I2C,&Referee::doShowScene);
    //    connect(Scene,&Scene::signal_I2D,&Referee::doShowScene);
    //    connect(Scene,&Scene::signal_C2D,&Referee::doShowScene);
}

void Referee::Manipulate(Scene *fromWidget, Scene *toWidget)
{
    doShowScene(toWidget);
    Scene *now = getCurrentScene();
    if (!(*now == *toWidget))
    {
        qDebug() << "wrong with Manipulate C2C";
        return;
    }
    bool flag = false;
    // for scene discription
//    qsrand(QTime::currentTime().msec());
//    int t = qrand() % 100;
    int t=QRandomGenerator::global()->bounded(100);

    if (isSameScene(now, lodge->frontHall->scenes[2]))
    {
        if (t < 30)
        {
            changePlayer(0,1,1);
            doShowDiscription(qstringlist_frontHall2_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->frontHall->scenes[3]))
    {
        if (t < 30)
        {
            changePlayer(-1,0,1);
            doShowDiscription(qstringlist_frontHall3_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->frontHall->scenes[4]))
    {
        if (t < 30)
        {
            changePlayer(-10,0,5);
            doShowDiscription(qstringlist_frontHall4_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->frontHall->scenes[5]))
    {
        if (t < 30)
        {
            changePlayer(10,0,3);
            doShowDiscription(qstringlist_frontHall5_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->backHall->scenes[3]))
    {
        if (t < 30)
        {
            changePlayer(-1,0,0);//你好你好会丢服务i发哈发哈客户人群宽容和客户下，，绿豆。楼。8一块i
            doShowDiscription(qstringlist_backHall3_text);
            flag = true;
        }
    }
//    else if (isSameScene(now, lodge->study->scenes[2]))
//    {
//        if (t < 30)
//        {
//            changePlayer(0,1,1);
//            doShowDiscription(getQSLsentence(qstringlist_study2_text, 0, 1));
//            flag = true;
//        }
//        else if (t < 60)
//        {
//            changePlayer(0,1,1);
//            doShowDiscription(getQSLsentence(qstringlist_study2_text, 2, 4));
//            flag = true;
//        }
//    }
    if (flag)
        return;

    // for master dialog
    t = QRandomGenerator::global()->bounded(100);
    if (isSameScene(now, lodge->frontHall->scenes[1]))
    {
        if (t < 3)
        {
            changePlayer(-1000,5,0);
            doShowDialog(kMaster,qstringlist_frontHall1_master_text);
            flag = true;
        }
//        else if (t < 30)
//        {
//            doShowDialog(kMaster, getQSLsentence(qstringlist_frontHall1_master_QA_text, 0, 0));
//            int res = doShowDialog(kPlayer, getQSLsentence(qstringlist_frontHall1_player_QA_text, 0, 0));
//            if (res == 0)
//            {
//                changePlayer(0,0,1);
//                doShowDialog(kMaster, getQSLsentence(qstringlist_frontHall1_master_QA_text, 1, 1));
//            }
//            else if (res == 1)
//            {
//                changePlayer(0,0,2);
//                doShowDialog(kMaster, getQSLsentence(qstringlist_frontHall1_master_QA_text, 2, 2));
//            }
//            flag = true;
//        }
    }
    else if (isSameScene(now, lodge->frontHall->scenes[2]))
    {
        if (t < 3)
        {
            changePlayer(-1000,5,0);
            doShowDialog(kMaster, qstringlist_frontHall2_master_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->frontHall->scenes[4]))
    {
        if (t < 30)
        {
            changePlayer(0,-1,0);
            doShowDialog(kMaster, qstringlist_frontHall4_master_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->frontHall->scenes[5]))
    {
        if (t < 30)
        {
            changePlayer(0,-3,1);
            doShowDialog(kMaster, qstringlist_frontHall5_master_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->frontHall->scenes[6]))
    {
        if (t < 30)
        {
            changePlayer(-3,1,0);
            doShowDialog(kMaster, qstringlist_frontHall6_master_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->backHall->scenes[1]))
    {
        if (t < 30)
        {
            changePlayer(0,-2,2);
            doShowDialog(kMaster, qstringlist_backHall1_master_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->backHall->scenes[2]))
    {
        if (t < 30)
        {
            changePlayer(5,0,1);
            doShowDialog(kMaster, qstringlist_backHall2_master_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->backHall->scenes[3]))
    {
        if (t < 30)
        {
            changePlayer(3,0,0);
            doShowDialog(kMaster, qstringlist_backHall3_master_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->study->scenes[2]))
    {
        if (t < 30)
        {
            changePlayer(0,-1,1);
            doShowDialog(kMaster, qstringlist_study2_master_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->boneRoom->scenes[2]))
    {
        if (t < 30)
        {

            changePlayer(0,-1,3);
            doShowDialog(kMaster, getQSLsentence(qstringlist_boneRoom2_master_text,0,1));
            flag = true;
        }
        else if(t<33)
        {
            changePlayer(-1000,1,0);
            doShowDialog(kMaster, getQSLsentence(qstringlist_boneRoom2_master_text,2,3));
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->eastBedRoom->scenes[1]))
    {
        if (t < 20)
        {
            changePlayer(0,-1,1);
            doShowDialog(kMaster, getQSLsentence(qstringlist_eastBedRoom1_master_text, 0, 0));
            flag = true;
        }
        else if (t < 30)
        {
            changePlayer(4-player->get_energy(),2,2);
            doShowDialog(kMaster, getQSLsentence(qstringlist_eastBedRoom1_master_text, 1, 1));
            flag = true;
        }
    }
}

void Referee::Manipulate(Scene *now, QStringList descriptions)
{
    QStringList dis = descriptions;
    doShowDiscription(dis);
    bool flag = false;
    // for item disciption
    int t = QRandomGenerator::global()->bounded(100);
    if (isSameScene(now, lodge->frontHall->items_detail[1]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(0,0,0);
            doShowDiscription(qstringlist_frontHall2_fishTank_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->frontHall->items_detail[2]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(0,0,0);
            doShowDiscription(qstringlist_frontHall3_plants_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->frontHall->items_detail[3]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-5,0,1);
            doShowDiscription(getQSLsentence(qstringlist_frontHall6_cabinet_text, 0, 0));
            flag = true;
        }
        else if (t < 40)
        {
            changePlayer(0,0,2);
            doShowDiscription(getQSLsentence(qstringlist_frontHall6_cabinet_text, 1, 2));
            flag = true;
        }
        else if (t < 50)
        {
            changePlayer(-5,0,2);
            doShowDiscription(getQSLsentence(qstringlist_frontHall6_cabinet_text, 3, 4));
            flag = true;
        }
        else if (t < 60)
        {
            changePlayer(-10,0,1);
            doShowDiscription(getQSLsentence(qstringlist_frontHall6_cabinet_text, 5, 6));
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->frontHall->items_detail[4]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-10,0,5);
            doShowDiscription(getQSLsentence(qstringlist_frontHall6_cabinet_text, 0, 1));
            flag = true;
        }
        else if (t < 40)
        {
            changePlayer(10,0,-2);
            doShowDiscription(getQSLsentence(qstringlist_frontHall6_cabinet_text, 2, 3));
            flag = true;
        }
        else if (t < 50)
        {
            changePlayer(-10,0,1);
            doShowDiscription(getQSLsentence(qstringlist_frontHall6_cabinet_text, 4, 5));
            flag = true;
        }
        else if(t<60)
        {
            changePlayer(10,0,5);
            doShowDiscription(getQSLsentence(qstringlist_frontHall6_cabinet_text, 6, 7));
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->backHall->items_detail[1]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(15,0,0);
            doShowDiscription(qstringlist_backHall2_table_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->boneRoom->items_detail[1]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-5,0,1);
            doShowDiscription(qstringlist_boneRoom1_cabinet_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->boneRoom->items_detail[2]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-10,0,2);
            doShowDiscription(qstringlist_boneRoom2_cabinet_north_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->boneRoom->items_detail[3]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-10,0,1);
            doShowDiscription(qstringlist_boneRoom2_cabinet_south_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->boneRoom->items_detail[4]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-5,0,0);
            doShowDiscription(qstringlist_boneRoom2_box_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->boneRoom->items_detail[5]->item_scene))
    {
        if (t < 30)
        {
            int x  = QRandomGenerator::global()->bounded(player->get_energy());
            int y  = QRandomGenerator::global()->bounded(player->get_yinyang());
            changePlayer(-x,0,y);
            doShowDiscription(getQSLsentence(qstringlist_boneRoom2_everything_text, 0, 0));
            flag = true;
        }
        else if (t < 60)
        {
            changePlayer(-1,0,1);
            doShowDiscription(getQSLsentence(qstringlist_boneRoom2_everything_text, 1, 1));
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->boneRoom->items_detail[6]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-3,0,1);
            doShowDiscription(getQSLsentence(qstringlist_boneRoom2_everything_text, 0, 0));
            flag = true;
        }
        else if (t < 60)
        {
            changePlayer(-3,0,1);
            doShowDiscription(getQSLsentence(qstringlist_boneRoom2_everything_text, 1, 1));
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->study->items_detail[1]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-3,0,1);
            doShowDiscription(qstringlist_study1_mirror_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->study->items_detail[2]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-3,0,1);
            doShowDiscription(qstringlist_study1_shelf_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->study->items_detail[3]->item_scene))
    {
        changePlayer(-3,0,1);
        int x = QRandomGenerator::global()->bounded(10);
        doShowDiscription(getQSLsentence(qstringlist_study2_bookshelf_north_text, x,x ));
        flag = true;
    }
    else if (isSameScene(now, lodge->study->items_detail[4]->item_scene))
    {
        changePlayer(-3,0,1);
        int x = QRandomGenerator::global()->bounded(10);
        doShowDiscription(getQSLsentence(qstringlist_study2_bookshelf_south_text, x, x));
        flag = true;
    }
    else if (isSameScene(now, lodge->study->items_detail[5]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-10,0,5);
            doShowDiscription(qstringlist_study2_box_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->study->items_detail[6]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-5,0,1);
            doShowDiscription(qstringlist_study2_desk_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->eastBedRoom->items_detail[1]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-5,0,1);
            doShowDiscription(qstringlist_eastBedroom_box_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->eastBedRoom->items_detail[2]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(0,0,0);
            doShowDiscription(qstringlist_eastBedroom_cabinet_text);
            flag = true;
        }
    }
    else if (isSameScene(now, lodge->westBedRoom->items_detail[1]->item_scene))
    {
        if (t < 30)
        {
            changePlayer(-player->get_energy()/2,0,0);
            doShowDiscription(qstringlist_westBedroom_box_text);
            flag = true;
        }
    }
}

bool Referee::changePlayer(int x, int y, int z)
{
    player->change_energy(x);
    player->change_disorder(y);
    player->change_yinyang(z);
    mainwindow->update();

    if (player->get_energy() <= 0)
    {
        doShowDiscription(qstringlist_fail_text);
        doShowScene(lodge->frontHall->scenes[1]);
        player->re_initialize(false);
        return false;
    }
    // 如果disorder大于100，游戏结束，显示失败，并点击任意位置直接退出窗口
    if (player->get_disorder() >= 100)
    {
        doShowDialog(kMaster,qstringlist_badend_text);
        player->re_initialize(true);
        doShowScene(welcome);
        return false;
    }
//    if (player->get_yinyang() < 0)
//        player->change_yinyang(-player->get_yinyang());
    if (player->get_disorder() <= 0)
    {
        doShowDialog(kMaster,qstringlist_goodend_text);
        player->re_initialize(true);
        doShowScene(welcome);
        return true;
    }
    return true;
}
bool Referee::isSameScene(Scene *s1, Scene *s2)
{
    return (*s1 == *s2);
}

QStringList Referee::getQSLsentence(QStringList origin, int from, int to)
{
    QStringList res;
    for (int i = from; i <= to; i++)
        res.push_back(origin[i]);
    return res;
}

Scene *Referee::getCurrentScene()
{
    return qobject_cast<Scene *>(stackedScene->currentWidget());
}

void Referee::doShowScene(Scene *toWidget)
{
    if (get_classname(toWidget) != "Scene")
    {
        qDebug() << "Warning: doShowScene() is not called by Scene class";
        return;
    }
    stackedScene->setCurrentWidget(toWidget);
}

void Referee::doShowDiscription(QStringList descriptions)
{
//    qDebug()<<descriptions;
    QLabel *dialogLabel = new QLabel(getCurrentScene());
    dialogLabel->setGeometry(100, 100, 1000, 500);
    // 设置字体和颜色
    QPalette palette;
    QFont font;
    palette.setColor(QPalette::WindowText, Qt::red);
    font.setPointSize(20);
    dialogLabel->setPalette(palette);
    dialogLabel->setFont(font);
    dialogLabel->show();
    for (const QString &sentence : descriptions)
    {
        // 显示当前句子
        dialogLabel->setText(sentence);
        // 等待一段时间
        QEventLoop loop;
        QTimer::singleShot(2000, &loop, &QEventLoop::quit);
        loop.exec();
    }
    dialogLabel->hide();
}

int Referee::doShowDialog(PlayerState kstat, QStringList descriptions)
{
    if (kstat == PlayerState::kMaster)
    {
        QLabel *dialogLabel = new QLabel(getCurrentScene());
        dialogLabel->setGeometry(100, 400, 1000, 700);
        // 设置字体和颜色
        QPalette palette;
        QFont font;
        palette.setColor(QPalette::WindowText, Qt::blue);
        font.setPointSize(20);
        dialogLabel->setPalette(palette);
        dialogLabel->setFont(font);
        dialogLabel->show();
        QLabel *pic = new QLabel(getCurrentScene());
        pic->setGeometry(50, 300, 100, 400);
        pic->setPixmap(QPixmap(master_pic_address));
        for (const QString &sentence : descriptions)
        {
            // 显示当前句子
            dialogLabel->setText(sentence);
            // 等待一段时间
            QEventLoop loop;
            QTimer::singleShot(2000, &loop, &QEventLoop::quit);
            loop.exec();
        }
        pic->hide();
        dialogLabel->hide();
    }
    else
    {
        // 生成两个label，同时显示description1和description2的内容,并设置为二选一
        QLabel *dialogLabel1 = new QLabel(getCurrentScene());
        QLabel *dialogLabel2 = new QLabel(getCurrentScene());
        dialogLabel1->setGeometry(100, 400, 500, 750);
        dialogLabel2->setGeometry(500, 400, 1000, 750);
        // 设置字体和颜色
        QPalette palette;
        QFont font;
        palette.setColor(QPalette::WindowText, Qt::green);
        font.setPointSize(20);
        dialogLabel1->setPalette(palette);
        dialogLabel2->setPalette(palette);
        dialogLabel1->setFont(font);
        dialogLabel2->setFont(font);
        dialogLabel1->show();
        dialogLabel2->show();
        // 显示当前句子
        dialogLabel1->setText(descriptions[0]);
        dialogLabel2->setText(descriptions[1]);
        // 若点击了label1，则返回0，否则返回1
        int res = 0;
        QEventLoop loop;
        connect(dialogLabel1, &QLabel::linkActivated, [&res, &loop]()
                {
            res = 0;
            loop.quit(); });
        connect(dialogLabel2, &QLabel::linkActivated, [&res, &loop]()
                {
            res = 1;
            loop.quit(); });
        loop.exec();
        dialogLabel1->hide();
        dialogLabel2->hide();
        return res;
    }
}
