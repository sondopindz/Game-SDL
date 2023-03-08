

#include "Bullet.h"

Bullet::Bullet()
{
  rect_.x = 0;
  rect_.y = 0;
  x_val_ = 0;
  y_val_ = 0;
  is_move_ = false;
}

Bullet::~Bullet()
{

}

void Bullet::HandleMove(const int& x_border, const int& y_border)
{
  if (is_move_ == true)
  {
    rect_.y -= y_val_;
    if (rect_.y < 0)
    {
      is_move_ = false;
    }
  }
}

void Bullet::HandleMoveRightToLeft()
{
  rect_.x -= x_val_;
  if (rect_.x < 0)
  {
    is_move_ = false;
  }
}

