// ------------------------------------------------------- 
// CompoundshapeBuilder.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 构造复合形状的建造者
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
