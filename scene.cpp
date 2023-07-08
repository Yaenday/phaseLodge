
#include "scene.h"

Scene::Scene(Referee *ref)
{
    refp = ref;
    refp->stackedScene->addWidget(this);
}

Scene::Scene(Referee *ref, QObject *par, QString img_address, QStringList dis)
{
    refp = ref;
    if (get_classname(par) == QString("Cubicle"))
        mode = SceneMode::kCubicle;
    else if (get_classname(par) == QString("Item"))
        mode = SceneMode::kItem;
    else
        mode = SceneMode::kNone;
    par_ptr = par;
    image = QPixmap(img_address);
    discriptions = dis;
    refp->stackedScene->addWidget(this);
}

void Scene::setSceneBasic(QPixmap img, QStringList dis)
{
    setImage(img);
    setDiscription(dis);
}

void Scene::setImage(QPixmap img)
{
    image = img;
}

void Scene::setDiscription(QStringList dis)
{
    discriptions = dis;
}

bool Scene::operator==(const Scene &other) const
{
    if (mode != other.mode || image.cacheKey() != other.image.cacheKey() || discriptions != other.discriptions)
        return false;
    if (buttons.size() != other.buttons.size())
        return false;
    for (int i = 0; i < buttons.size(); ++i)
        if (buttons[i]->text() != other.buttons[i]->text())
            return false;
    return true;
}

SceneMode Scene::getMode()
{
    return mode;
}

QPixmap Scene::getImage()
{
    return image;
}

QStringList Scene::getDiscription()
{
    return discriptions;
}

// void setButton(ButtomType btype, Scene *toScene, QRect rect, ArrowType atype = ArrowType::kNoArrow);
// void Scene::setButton(Scene *toScene, QRect rect, ArrowType atype)
// {
//     // 有按钮类转换
//     if (atype != kNoArrow)
//     {
//         QPushButton *btn = new QPushButton(this);
//         btn->setGeometry(rect);
//         btn->setFlat(true);
//         btn->setIcon(QIcon(get_address_of_arrow_icon(atype)));
//         btn->setIconSize(get_arrow_icon_size(atype));
//         // transform_widget_to_scene(fromWidget)->addButton(btn);
//         connect(btn, &QPushButton::clicked, [=]()
//                 { Referee::doShowScene(this, toScene); });
//         buttons.append(btn);
//     }
//     // 无按钮类转换
//     else
//     {
//         QPushButton *btn = new QPushButton(this);
//         btn->setGeometry(rect);
//         btn->setFlat(true);
//         btn->setText("查看");
//         // transform_widget_to_scene(fromWidget)->addButton(btn);
//         connect(btn, &QPushButton::clicked, [=]()
//                 { Referee::doShowScene(this, toScene); });
//         buttons.append(btn);
//     }
// }

void Scene::setButtonC2C(Scene *toScene, QRect rect, ArrowType atype)
{
    QPushButton *btn = new QPushButton(this);
    btn->setGeometry(rect);
    btn->setFlat(true);
    btn->setIcon(QIcon(get_address_of_arrow_icon(atype)));
    btn->setIconSize(get_arrow_icon_size(atype));
    connect(btn, &QPushButton::clicked, [=]()
            { refp->Manipulate(this, toScene); });
    //    connect(btn,&QPushButton::clicked,[=](){emit signal_C2C(this,toScene);});
    buttons.append(btn);
}

void Scene::setButtonI2D(QStringList dis, QRect rect)
{
    QPushButton *btn = new QPushButton(this);
    btn->setGeometry(rect);
    btn->setFlat(true);
    //    btn->setText("I2D查看");
    QString styleSheet=QString(
        //设置按下状态样式
        "QPushButton:pressed{"
        "background-color:rgba(0,0,0,200);"
        "color:rgb(0,255，255);"
        "}"
        );
    btn->setStyleSheet(styleSheet);
    connect(btn, &QPushButton::clicked, [=]()
            { refp->Manipulate(this, dis); });
    //    connect(btn,&QPushButton::clicked,[=](){emit signal_I2D(dis);});
    buttons.append(btn);
}

void Scene::setButtonC2I(Scene *toScene, QRect rect)
{
    QPushButton *btn = new QPushButton(this);
    btn->setGeometry(rect);
    btn->setFlat(true);
    //    btn->setText("C2I物品");
    connect(btn, &QPushButton::clicked, [=]()
            { refp->Manipulate(this, toScene); });
    //    connect(btn,&QPushButton::clicked,[=](){emit signal_C2I(this,toScene);});
    buttons.append(btn);
}

void Scene::setButtonI2C(Scene *toScene, QRect rect)
{
    QPushButton *btn = new QPushButton(this);
    btn->setGeometry(rect);
    btn->setFlat(true);
    btn->setIcon(QIcon(get_address_of_arrow_icon(kLeftArrow)));
    btn->setIconSize(get_arrow_icon_size(kLeftArrow));
    connect(btn, &QPushButton::clicked, [=]()
            { refp->Manipulate(this, toScene); });
    //    connect(btn,&QPushButton::clicked,[=](){emit signal_I2C(this,toScene);});
    buttons.append(btn);
}

void Scene::setButtonC2D(QStringList dis, QRect rect)
{
    QPushButton *btn = new QPushButton(this);
    btn->setGeometry(rect);
    btn->setFlat(true);
    //    btn->setText("C2D查看");
    connect(btn, &QPushButton::clicked, [=]()
            { refp->Manipulate(this, dis); });
    //    connect(btn,&QPushButton::clicked,[=](){emit signal_C2D(dis);});
    buttons.append(btn);
}

