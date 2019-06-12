#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &x) { *this = x; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->_grade = other._grade;
	return *this;
}

void Bureaucrat::gradeInc()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::gradeDec()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &x) { *this = x;}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &x) {(void)x; return *this;}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}
const char *Bureaucrat::GradeTooHighException::what() const  throw() {
	return "Grade to high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &x) { *this = x;}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &x) {(void)x; return *this;}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade to low";
}


std::ostream  &operator<<(std::ostream &coutN, const Bureaucrat &Trump)
{
	return coutN << Trump.getName() << " Grade is: " << Trump.getGrade();
}