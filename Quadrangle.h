#ifndef Quadrangle_H
#define Quadrangle_H

#include "Figure.h"

class Quadrangle: public Figure
{
private:
    int sideA{};
    int sideB{};
    int sideC{};
    int sideD{};
    int angleA{};
    int angleB{};
    int angleC{};    
    int angleD{};
public: 
    Quadrangle(int sideA_, int sideB_, int sideC_, int sideD_, int angleA_, int angleB_, int angleC_, int angleD_, std::string_view name_ = "Четырехугольник");

    void print() override;
};

#endif