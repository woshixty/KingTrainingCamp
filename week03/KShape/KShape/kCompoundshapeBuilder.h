// ------------------------------------------------------- 
// CompoundshapeBuilder.h 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ���츴����״�Ľ�����
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_COMPOUNDSHAPEBUILDER_H
#define CPPDESIGNPATTERNS_COMPOUNDSHAPEBUILDER_H

#include "kShape.h"
#include <vector>

using namespace std;

class KCompoundshapeBuilder 
{
public:
    KCompoundshapeBuilder();

    ~KCompoundshapeBuilder();

    KCompoundshapeBuilder* build(KShape* buildPara);

    KShape* getShape();

private:
    vector<KShape*> m_shapes;
};


#endif //CPPDESIGNPATTERNS_COMPOUNDSHAPEBUILDER_H
