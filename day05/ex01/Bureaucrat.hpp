#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <stdexcept>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &x);
    Bureaucrat &operator=(Bureaucrat const &other);
    ~Bureaucrat();
    int getGrade() const;
    const std::string getName() const;
    void gradeInc(); 
    void gradeDec();
    void signForm(Form &form);

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(const GradeTooLowException &);
        GradeTooLowException &operator=(const GradeTooLowException &);
        ~GradeTooLowException() throw();
        virtual const char *what() const  throw();
    
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

};
    std::ostream  &operator<<(std::ostream &coutN, const Bureaucrat &Trump);

#endif