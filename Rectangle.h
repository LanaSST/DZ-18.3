#ifndef Rectangle_H
#define Rectangle_H

#include "Parallelogram.h"

class Rectangle: public Parallelogram
{
public: 
    Rectangle(int sideA_, int sideB_, std::string_view name_ = "Прямоугольник");
};

#endif