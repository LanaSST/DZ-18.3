#ifndef Square_H
#define Square_H

#include "Rectangle.h"

class Square: public Rectangle
{
public: 
    Square(int side_, std::string_view name_ = "Квадрат");
};

#endif