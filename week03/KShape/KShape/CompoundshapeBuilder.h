// ------------------------------------------------------- 
// CompoundshapeBuilder.h 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ���츴����״�Ľ�����
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_COMPOUNDSHAPEBUILDER_H
#define CPPDESIGNPATTERNS_COMPOUNDSHAPEBUILDER_H

#include "Shape.h"
#include <vector>

using namespace std;

class CompoundshapeBuilder 
{
public:
    CompoundshapeBuilder();

    ~CompoundshapeBuilder();

    CompoundshapeBuilder* build(Shape* buildPara);

    Shape* getShape();

private:
    vector<Shape*> shapes;
};


#endif //CPPDESIGNPATTERNS_COMPOUNDSHAPEBUILDER_H
