#ifndef Figure_H
#define Figure_H

class Figure
{
private:
    std::string name;

public:    
    Figure(std::string_view name_ = "Фигура");

    std::string getName();

    virtual void print() = 0;

    virtual ~Figure() = default;
};

#endif