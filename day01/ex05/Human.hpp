#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"

class Human
{
private:
    const Brain *bobby;
public:
    std::string     identify();
    const Brain           &getBrain();
                    Human();
                    ~Human();
};

#endif