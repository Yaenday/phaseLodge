
#include "player.h"

Player::Player(Referee *ref, QString pic_address)
{
   refp = ref;
   playerImage = QPixmap(pic_address);
   initialize();
}

Player::~Player()
{
}

void Player::initialize()
{
   energy = 100;
   disorder = 50;
   yinyang = 0;
}

void Player::re_initialize(bool newPlayer)
{
   if (newPlayer)
      initialize();
   else
   {
      energy = 100;
      disorder = disorder / 2;
      yinyang = yinyang / 2;
   }
}

int Player::get_energy()
{
   return energy;
}

int Player::get_disorder()
{
   return disorder;
}

int Player::get_yinyang()
{
   return yinyang;
}

void Player::change_energy(int delta)
{
   energy -= delta;
}
void Player::change_disorder(int delta)
{
   disorder += delta;
}
void Player::change_yinyang(int delta)
{
   yinyang += delta;
}
