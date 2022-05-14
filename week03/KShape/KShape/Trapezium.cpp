#include "Trapezium.h"
#include <math.h>
#include <iostream>

using namespace std;

Trapezium::Trapezium() : top(0.0), bottom(0.0), left(0.0), right(0.0) {}

Trapezium::Trapezium(double t, double b, double l, double r) : top(t), bottom(b), left(l), right(r) {}

Trapezium::Trapezium(Shape* shape) 
{
    if (shape != nullptr && shape->type() == trapezium) 
    {
        Trapezium* p = dynamic_cast<Trapezium*>(shape);
        top = p->top;
        bottom = p->bottom;
        left = p->left;
        right = p->right;
    }
    else 
    {
        top = 0;
        bottom = 0;
        left = 0;
        right = 0;
        cout << "���Ͳ������ڹ���Trapezium" << endl;
    }
}

Trapezium::~Trapezium() {}

double Trapezium::perimeter() const 
{
    return top + bottom + left + right;
}

double Trapezium::area() const 
{
    double x = abs(top - bottom);
    if (x == 0) 
    {
        // Ϊƽ���ı���
        return 0.0;
    }
    double p = (left + right + x) / 2.0;
    double s = sqrt(p * (p - left) * (p - right) * (p - x));
    return (top + bottom) * s / x;
}

ShapeType Trapezium::type() const 
{
    return trapezium;
}
