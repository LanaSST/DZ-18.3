#include "Rhomb.h"

Rhomb::Rhomb(int side_, int angleA_, int angleB_, std::string_view name_) : 
        Parallelogram(side_, side_, angleA_, angleB_, name_)
    { }

