#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int sideAB_, int sideC_, int angleAB_, int angleC_, std::string_view name_) :
    Triangle(sideAB_, sideAB_, sideC_, angleAB_, angleAB_, angleC_, name_)
{ }

