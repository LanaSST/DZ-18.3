#include "RightAngledTriangle.h"

RightAngledTriangle::RightAngledTriangle(int sideA_, int sideB_, int sideC_, int angleA_, int angleB_, std::string_view name_) :
    Triangle(sideA_, sideB_, sideC_, angleA_, angleB_, 90, name_)
{ }
