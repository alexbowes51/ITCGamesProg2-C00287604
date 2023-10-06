#pragma once
#include <iostream>



class Triangle
{
public:
    Triangle() = default;
    Triangle(float t_base, float t_height) : m_base(t_base), m_height(t_height)
    {}


    float hypot()
    {
        float result;

        result = sqrt(m_height * m_height + m_base * m_base);



        return result;
    }

    float area()
    {
        float result;

        result = (m_height * m_base) / 2;

        return result;
    }


private:
    float m_base{12};
    float m_height{ 5 };

};