#pragma once

class Collectible
{
public:
    enum class Type
    {
        HealthPack, GoldCoin, SilverCoin, BronzeCoin
    };
    // Default construction possible
    Collectible(Type t_type=Type::BronzeCoin, int t_value = 20);
    
    int value() const;

    void setType(Type t_type);

    void setValue(int t_value);
    
private:
    Type m_type;
    int m_value;
};

