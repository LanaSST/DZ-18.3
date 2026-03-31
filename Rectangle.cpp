#include <string>
#include "Rectangle.h"

Rectangle::Rectangle(int sideA_, int sideB_, std::string_view name_) : 
        Parallelogram(sideA_, sideB_, 90, 90, name_)
    { }