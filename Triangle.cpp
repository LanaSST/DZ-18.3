#include <iostream>
#include "Triangle.h"

Triangle::Triangle(int sideA_, int sideB_, int sideC_, int angleA_, int angleB_, int angleC_, std::string_view name_) :
    Figure(name_), sideA(sideA_), sideB(sideB_), sideC(sideC_), angleA(angleA_), angleB(angleB_), angleC(angleC_)
{ }

void Triangle::print()
{
    std::cout << getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << std::endl;
}
