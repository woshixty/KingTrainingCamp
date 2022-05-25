#include "kRectangle.h"
#include <iostream>

using namespace std;

KRectangle::KRectangle() : m_length(0.0), m_width(0.0) {}

KRectangle::KRectangle(double l, double w) : m_length(l), m_width(w) {}

KRectangle::KRectangle(KShape* shape) 
{
    if (shape != nullptr && shape->type() == rectangle) 
    {
        KRectangle* p = dynamic_cast<KRectangle*>(shape);
        m_length = p->m_length;
        m_width = p->m_width;
    }
    else 
    {
        m_length = 0.0;
        m_width = 0.0;
        cout << "类型不可用于构造Rectangle" << endl;
    }
}

KRectangle::~KRectangle() {}

double KRectangle::perimeter() const 
{
    return 2 * (m_length + m_width);
}

double KRectangle::area() const {
    return m_length * m_width;
}

ShapeType KRectangle::type() const {
    return rectangle;
}
