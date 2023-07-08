
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Referee *parent) : refp(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    QWidget *now = refp->stackedScene->currentWidget();
    if (get_classname(now) != "Scene")
        qDebug() << "Warning: paintEvent() is not called by Scene class";
    Scene *nowScene = dynamic_cast<Scene *>(now);
    painter.drawPixmap(0, 0, DRAW_WINDOW_WIDTH, DRAW_WINDOW_HEIGHT, nowScene->getImage());

    painter.drawPixmap(rect_avatar_pic, refp->player->playerImage);
    painter.drawText(rect_Player_energy, Qt::AlignCenter,QString("生命值: %1").arg(refp->player->get_energy()));
    painter.drawText(rect_Player_disorder, Qt::AlignCenter,QString("混乱值: %1").arg(refp->player->get_disorder()));
    painter.drawText(rect_Player_yinyang,  Qt::AlignCenter,QString("阴阳值: %1").arg(refp->player->get_yinyang()));
    //    for debug
    painter.setPen(QColor(255, 255, 255));
    //    painter.setRenderHint(QPainter::Antialiasing, true); // 抗锯齿
    //    for (int i = 0; i < DRAW_WINDOW_WIDTH/BUTTON_C2C_WIDTH; i++)
    //    {
    //        // 从左到右，第(i+1)条竖线
    //        painter.drawLine(0 + BUTTON_C2C_WIDTH * i, BUTTON_C2C_WIDTH,
    //                         0 + BUTTON_C2C_WIDTH * i, 0 + (DRAW_WINDOW_HEIGHT/BUTTON_C2C_HEIGHT-1)*BUTTON_C2C_HEIGHT);
    //    }
    //    for(int i =0;i<DRAW_WINDOW_HEIGHT/BUTTON_C2C_HEIGHT;i++)
    //    {
    //        // 从上到下，第（i+1)条横线
    //        painter.drawLine(BUTTON_C2C_HEIGHT, 0 + BUTTON_C2C_HEIGHT * i,
    //                         0 + (DRAW_WINDOW_WIDTH/BUTTON_C2C_WIDTH-1)*BUTTON_C2C_HEIGHT, 0 + BUTTON_C2C_HEIGHT * i);
    //    }
}
