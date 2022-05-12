#ifndef CPPDESIGNPATTERNS_RECTANGLE_H
#define CPPDESIGNPATTERNS_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle();

    // ʹ�ù���ģʽ��������ʱ�жϱ��Ƿ�����
    Rectangle(double l, double w);

    Rectangle(Shape* shape);

    ~Rectangle();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_RECTANGLE_H
