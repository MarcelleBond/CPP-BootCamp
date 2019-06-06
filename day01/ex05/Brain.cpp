#include "Brain.hpp"
#include <sstream>
Brain::Brain(){}

Brain::~Brain(){}

std::string Brain::identify() const
{
    std::ostringstream heart;
    heart << this;
    return heart.str();
}