#include "Form.hpp"

Form::Form() : _name("Form"), _signedGrade(1), _exeGrade(150){}

Form::Form(std::string name, int SG, int EG) : _name(name), _signedGrade(SG), _exeGrade(EG) 
{
    
	if (SG < 1 || EG < 1)
		throw Form::GradeTooHighException();
	else if (SG > 150 || EG > 150)
		throw Form::GradeTooLowException();
    this->_indicator = false;
}

Form::Form(const Form &x): _name(x.getName()), _signedGrade(x.getSignedGrade()), _exeGrade(x.getExeGrade())
{*this = x;}

Form &Form::operator=(const Form &)
{
    return *this;
}

Form::~Form()
{
}

const std::string Form::getName() const 
{
    return this->_name;
}

const int Form::getSignedGrade() const 
{
    return this->_signedGrade;
}

const int Form::getExeGrade() const 
{
    this->_exeGrade;
}

bool Form::getIndicator() const 
{
    return this->_indicator;
}

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() <= this->_signedGrade)
        this->_indicator = true;
    else
		throw Form::GradeTooLowException();

}

Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &x) { *this = x;}
Form::GradeTooHighException &Form::GradeTooHighException::operator=(const GradeTooHighException &x) {(void)x; return *this;}
Form::GradeTooHighException::~GradeTooHighException() throw(){}
const char *Form::GradeTooHighException::what()const  throw() {
	return "Grade to high";
}

Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &x) { *this = x;}
Form::GradeTooLowException &Form::GradeTooLowException::operator=(const GradeTooLowException &x) {(void)x; return *this;}
Form::GradeTooLowException::~GradeTooLowException() throw(){}
const char *Form::GradeTooLowException::what() const throw() {
	return "Grade to low";
}

std::ostream  &operator<<(std::ostream &coutN, const Form &Trump)
{
	coutN << "The form name is: " << Trump.getName() << " The indicator is " << Trump.getIndicator() << " The ExecuteGrade is: " << Trump.getExeGrade() << " The SignGrade is:" << Trump.getSignedGrade() << std::endl;
}