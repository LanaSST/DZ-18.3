#ifndef IsoscelesTriangle_H
#define IsoscelesTriangle_H

#include <string>
#include "Triangle.h"

class IsoscelesTriangle: public Triangle
{
public: 
    IsoscelesTriangle(int sideAC_, int sideB_, int angleAС_, int angleB_, std::string_view name_ = "Равнобедренный треугольник");
};

#endif