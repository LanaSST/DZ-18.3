#ifndef Triangle_H
#define Triangle_H

#include "Figure.h"

class Triangle: public Figure
{
private:
    int sideA{};
    int sideB{};
    int sideC{};
    int angleA{};
    int angleB{};
    int angleC{};

public: 
    Triangle(int sideA_, int sideB_, int sideC_, int angleA_, int angleB_, int angleC_, std::string_view name_ = "Треугольник");

    void print() override;
};

#endif