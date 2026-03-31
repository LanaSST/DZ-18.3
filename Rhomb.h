#ifndef Rhomb_H
#define Rhomb_H

#include "Parallelogram.h"

class Rhomb: public Parallelogram
{
public: 
    Rhomb(int side_, int angleA_, int angleB_, std::string_view name_ = "Ромб");
};

#endif
