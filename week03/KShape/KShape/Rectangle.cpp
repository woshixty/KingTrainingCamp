#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() : length(0.0), width(0.0) {}

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

Rectangle::Rectangle(Shape* shape) 
{
    if (shape != nullptr && shape->type() == rectangle) 
    {
        Rectangle* p = dynamic_cast<Rectangle*>(shape);
        length = p->length;
        width = p->width;
    }
    else 
    {
        length = 0.0;
        width = 0.0;
        cout << "���Ͳ������ڹ���Rectangle" << endl;
    }
}

Rectangle::~Rectangle() {}

double Rectangle::perimeter() const 
{
    return 2 * (length + width);
}

double Rectangle::area() const {
    return length * width;
}

ShapeType Rectangle::type() const {
    return rectangle;
}
