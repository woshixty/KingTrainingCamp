#include "kSquare.h"
#include <iostream>

using namespace std;

KSquare::KSquare() : m_side(0.0) {}

KSquare::KSquare(double s) : m_side(s) {}

KSquare::KSquare(KShape* shape) 
{
    if (shape != nullptr && shape->type() == square) 
    {
        KSquare* p = dynamic_cast<KSquare*>(shape);
        m_side = p->m_side;
    }
    else 
    {
        m_side = 0.0;
        cout << "类型不可用于构造Square" << endl;
    }
}

KSquare::~KSquare() {}

double KSquare::perimeter() const 
{
    return 4 * m_side;
}

double KSquare::area() const 
{
    return m_side * m_side;
}

ShapeType KSquare::type() const 
{
    return square;
}
