
#include "AForm.hpp"

AForm::AForm() : _name("nacho"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute): _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();

	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return (*this);
}

const std::string &AForm::getName() const
{
	return (_name);
}

bool AForm::getIsSigned() const
{
	return (_isSigned);
}

int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();

	_isSigned = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw FormNotSignedException();

	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();

	executeAction();
}


const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade too low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "Form not signed";
}


std::ostream &operator<<(std::ostream &out, const AForm &form)
{
	out << "Form \"" << form.getName() << "\", signed: " << (form.getIsSigned() ? "yes" : "no")
	<< ", grade required to sign: " << form.getGradeToSign() << ", grade required to execute: " << form.getGradeToExecute();

	return (out);
}
