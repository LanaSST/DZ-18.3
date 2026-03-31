#include <iostream>

#include "RightAngledTriangle.h"
#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "Rhomb.h"
#include "Square.h"

void print_info(Figure * figure)
{
    if(figure)
        figure->print();
    else
        std::cout << "invalid figure" << std::endl;    
    std::cout << std::endl;
}


int main()
{
    Triangle triangle{10, 20, 30, 50, 60, 70};
    RightAngledTriangle rightAngledTriangle{10, 20, 30, 50, 60};
    IsoscelesTriangle isoscelesTriangle{10, 20, 50, 60};
    EquilateralTriangle equilateralTriangle{30};
    Quadrangle quadrangle{10, 20, 30, 40, 50, 60, 70, 80};
    Rectangle rectangle{10, 20};
    Square square{20};
    Parallelogram parallelogram{20, 30, 30, 40};
    Rhomb rhomb{30, 30, 40};

    print_info(&triangle);
    print_info(&rightAngledTriangle);
    print_info(&isoscelesTriangle);
    print_info(&equilateralTriangle);
    print_info(&quadrangle);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhomb);

    return 0;
}