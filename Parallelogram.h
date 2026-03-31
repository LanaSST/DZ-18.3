#ifndef Parallelogram_H
#define Parallelogram_H

#include "Quadrangle.h"

class Parallelogram: public Quadrangle
{
public: 
    Parallelogram(int sideA_, int sideB_, int angleA_, int angleB_, std::string_view name_ = "Параллелограмм");
};

#endif