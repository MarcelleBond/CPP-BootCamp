#ifndef FORM_H
#define FORM_H

#include <string>
#include "Bureaucrat.hpp"
class Form
{
public:
    Form();
    Form(Bureaucrat b);
    Form(const Form &);
    Form &operator=(const Form &);
    ~Form();
    const std::string getName();
    const int getSignedGrade();
    const int getExeGrade();
    bool getIndicator();
    
private:
    const std::string name;
    bool indicator;
    const int signedGrade;
    const int exeGrade;
};

#endif // FORM_H
