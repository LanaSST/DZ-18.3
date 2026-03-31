#include <string>
#include "Figure.h"

Figure::Figure(std::string_view name_) : name(name_)
{ }

std::string Figure::getName()
{
    return name;
}
