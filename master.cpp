
#include "master.h"

Master::Master(Referee *ref, QString pic_address)
{
    refp = ref;
    masterImage = new QPixmap(pic_address);
}

bool Master::hasMasterDialog(Scene *now)
{
}

QStringList Master::getMasterDialog(Scene *now)
{
}
