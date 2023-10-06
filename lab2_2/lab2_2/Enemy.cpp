#include "Enemy.h"


Enemy::Enemy()
{
}

Enemy::Enemy(Collectible::Type t_type, int t_value)
    {
        m_collectible = Collectible(t_type, t_value);
    }




