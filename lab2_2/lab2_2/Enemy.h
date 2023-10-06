#pragma once
#include "Collectible.h"

class Enemy
{
public:
    Enemy();
    Enemy(Collectible::Type t_type, int t_value = 20);
   
    void addItem(Collectible::Type t_type, int t_value = 20);

private:
    Collectible m_collectible;
};

