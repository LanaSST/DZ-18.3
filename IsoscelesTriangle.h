#ifndef IsoscelesTriangle_H
#define IsoscelesTriangle_H

#include "Triangle.h"

class IsoscelesTriangle: public Triangle
{
public: 
    IsoscelesTriangle(int sideAB_, int sideC_, int angleAB_, int angleC_, std::string_view name_ = "Равнобедренный треугольник");
};

#endif