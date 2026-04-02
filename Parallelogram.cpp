#include "Parallelogram.h"

Parallelogram::Parallelogram(int sideA_, int sideB_, int angleA_, int angleB_, std::string_view name_) : 
        Quadrangle(sideA_, sideB_, sideA_, sideB_, angleA_, angleB_, angleA_, angleB_, name_)
    { }