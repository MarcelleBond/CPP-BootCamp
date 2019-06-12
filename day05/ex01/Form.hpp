#ifndef FORM_H
#define FORM_H

#include <string>
#include "Bureaucrat.hpp"

class Form
{
public:
    Form();
    Form::Form(std::string name, int SG, int EG);
    Form(const Form &);
    Form& operator=(const Form &);
    ~Form();
    const std::string getName() const ;
    const int getSignedGrade() const ;
    const int getExeGrade() const;
    bool getIndicator() const;
    void beSigned(Bureaucrat b);
    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(const GradeTooLowException &);
        GradeTooLowException &operator=(const GradeTooLowException &);
        ~GradeTooLowException() throw();
        virtual const char *what() const throw();
    
    private:
        
    };
    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException();
        GradeTooHighException(const GradeTooHighException &);
        GradeTooHighException &operator=(const GradeTooHighException &);
        ~GradeTooHighException() throw();
        virtual const char *what() const throw();    
    private:
        
    };

private:
    const std::string _name;
    bool _indicator;
    const int _signedGrade;
    const int _exeGrade;
};

std::ostream  &operator<<(std::ostream &coutN, const Form &Trump);
#endif // FORM_H
