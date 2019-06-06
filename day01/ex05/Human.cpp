#include "Human.hpp"

Human::Human()
{
    this->bobby = new Brain();
}

Human::~Human()
{
    delete this->bobby;
}

std::string Human::identify()
{
    return this->bobby->identify();
}

const Brain   &Human::getBrain()
{
    return *bobby;
}