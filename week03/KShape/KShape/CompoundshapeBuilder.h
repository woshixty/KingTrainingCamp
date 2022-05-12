#ifndef CPPDESIGNPATTERNS_COMPOUNDSHAPEBUILDER_H
#define CPPDESIGNPATTERNS_COMPOUNDSHAPEBUILDER_H

#include "Shape.h"
#include <vector>

using namespace std;

class CompoundshapeBuilder {
public:
    CompoundshapeBuilder();

    ~CompoundshapeBuilder();

    CompoundshapeBuilder* build(Shape* buildPara);

    Shape* getShape();

private:
    vector<Shape*> shapes;
};


#endif //CPPDESIGNPATTERNS_COMPOUNDSHAPEBUILDER_H
