#include "kTrapezium.h"
#include <math.h>
#include <iostream>

using namespace std;

KTrapezium::KTrapezium() : m_top(0.0), m_bottom(0.0), m_left(0.0), m_right(0.0) {}

KTrapezium::KTrapezium(double t, double b, double l, double r) : m_top(t), m_bottom(b), m_left(l), m_right(r) {}

KTrapezium::KTrapezium(KShape* shape) 
{
    if (shape != nullptr && shape->type() == trapezium) 
    {
        KTrapezium* p = dynamic_cast<KTrapezium*>(shape);
        m_top = p->m_top;
        m_bottom = p->m_bottom;
        m_left = p->m_left;
        m_right = p->m_right;
    }
    else 
    {
        m_top = 0;
        m_bottom = 0;
        m_left = 0;
        m_right = 0;
        cout << "类型不可用于构造Trapezium" << endl;
    }
}

KTrapezium::~KTrapezium() {}

double KTrapezium::perimeter() const 
{
    return m_top + m_bottom + m_left + m_right;
}

double KTrapezium::area() const 
{
    double x = abs(m_top - m_bottom);
    if (x == 0) 
    {
        // 为平行四边形
        return 0.0;
    }
    double p = (m_left + m_right + x) / 2.0;
    double s = sqrt(p * (p - m_left) * (p - m_right) * (p - x));
    return (m_top + m_bottom) * s / x;
}

ShapeType KTrapezium::type() const 
{
    return trapezium;
}
