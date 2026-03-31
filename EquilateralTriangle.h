#ifndef EquilateralTriangle_H
#define EquilateralTriangle_H

#include "Triangle.h"

class EquilateralTriangle: public Triangle
{
public: 
    EquilateralTriangle(int side_, std::string_view name_ = "Равносторонний треугольник");

};

#endif
