#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a = Bureaucrat("Bob", 1);
    Bureaucrat b = Bureaucrat("Bobert", 150);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    //C
    try
    {
        Bureaucrat c = Bureaucrat("Bobby", 151);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    };

    //A
    try
    {
        a.gradeDec();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    };
    try
    {
        a.gradeInc();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    };
    //B
    try
    {
        b.gradeInc();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    };
    try
    {
        b.gradeDec();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    };

    return (0);
}