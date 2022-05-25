#include "kRound.h"
#include <iostream>

using namespace std;

KRound::KRound() : m_radius(0.0) {}

KRound::KRound(double r) : m_radius(r) {}

KRound::KRound(KShape* shape) 
{
    if (shape != nullptr && shape->type() == circle) 
    {
        KRound* p = dynamic_cast<KRound*>(shape);
        m_radius = p->m_radius;
    }
    else 
    {
        m_radius = 0.0;
        cout << "类型不可用于构造Round" << endl;
    }
}

KRound::~KRound() {}

double KRound::perimeter() const 
{
    return 2 * m_radius * PI;
}

double KRound::area() const 
{
    return PI * m_radius * m_radius;
}

ShapeType KRound::type() const 
{
    return circle;
}
