#include "kTriangle.h"
#include <iostream>
#include <math.h>

using namespace std;

KTriangle::KTriangle() : m_side_a(0.0), m_side_b(0.0), m_side_c(0.0) {}

KTriangle::KTriangle(double a, double b, double c) : m_side_a(a), m_side_b(b), m_side_c(c) {}

KTriangle::KTriangle(KShape* shape) 
{
    if (shape != nullptr && shape->type() == triangle) 
    {
        KTriangle* p = dynamic_cast<KTriangle*>(shape);
        m_side_a = p->m_side_a;
        m_side_b = p->m_side_b;
        m_side_c = p->m_side_c;
    }
    else 
    {
        m_side_a = 0;
        m_side_b = 0;
        m_side_c = 0;
        cout << "类型不可用于构造Triangle" << endl;
    }
}

KTriangle::~KTriangle() {}

void KTriangle::setSides(double a, double b, double c) 
{
    if (a + b > c && b + c > a && a + c > b) 
    {
        m_side_a = a;
        m_side_b = b;
        m_side_c = c;
    }
    else 
    {
        cout << "不能构成三角形" << endl;
    }
}

double KTriangle::perimeter() const 
{
    return m_side_a + m_side_b + m_side_c;
}

double KTriangle::area() const 
{
    double s = (m_side_a + m_side_b + m_side_c) / 2.0;
    return sqrt(s * (s - m_side_a) * (s - m_side_b) * (s - m_side_c));
}

ShapeType KTriangle::type() const 
{
    return triangle;
}
