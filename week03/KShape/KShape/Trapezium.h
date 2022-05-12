#ifndef CPPDESIGNPATTERNS_TRAPEZIUM_H
#define CPPDESIGNPATTERNS_TRAPEZIUM_H


#include "Shape.h"

class Trapezium : public Shape {
private:
    double top, bottom, left, right;
public:
    Trapezium();

    // 使用工厂模式创建对象时判断边是否正常
    Trapezium(double t, double b, double l, double r);

    Trapezium(Shape* shape);

    ~Trapezium();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_TRAPEZIUM_H
