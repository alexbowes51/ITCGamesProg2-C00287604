#include "Collectible.h"

// Default construction possible
Collectible::Collectible(Type t_type, int t_value) :
    m_type(t_type), m_value(t_value)
{}

int Collectible::value() const
{
    return m_value;
}

void Collectible::setType(Type t_type)
{
    m_type = t_type;
}

void Collectible::setValue(int t_value)
{
    m_value = t_value;
}
