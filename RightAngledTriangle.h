#ifndef RightAngledTriangle_H
#define RightAngledTriangle_H

#include "Triangle.h"

class RightAngledTriangle: public Triangle
{
public: 
    RightAngledTriangle(int sideA_, int sideB_, int sideC_, int angleA_, int angleB_, std::string_view name_ = "Прямоугольный треугольник");

};

#endif