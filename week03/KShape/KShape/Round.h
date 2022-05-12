#ifndef CPPDESIGNPATTERNS_ROUND_H
#define CPPDESIGNPATTERNS_ROUND_H

#include "Shape.h"
#include <math.h>

#define PI acos(-1)

class Round : public Shape {
private:
    double radius;
public:
    Round();

    // ʹ�ù���ģʽ��������ʱ�жϱ��Ƿ�Ϊ����
    Round(double r);

    Round(Shape* shape);

    ~Round();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_ROUND_H
