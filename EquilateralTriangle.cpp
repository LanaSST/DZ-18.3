#include <string>
#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int side_, std::string_view name_) :
    Triangle(side_, side_, side_, 60, 60, 60, name_)
{ }
