/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 16:52:01 by nachofluxa        #+#    #+#             */
/*   Updated: 2026/03/26 17:26:25 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Pepito"), _grade(150){}

Bureaucrat::Bureaucrat(const std::string &_name, int _grade) : _name(_name)
{
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
	this->_grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName()), _grade(other.getGrade()) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{	
	this->_grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

const std::string &Bureaucrat::getName() const {return (this->_name);}

int	Bureaucrat::getGrade() const {return (this->_grade);}

void Bureaucrat::incrementGrade(void)
{
	if (this->getGrade() - 1 < 0)
		throw GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->getGrade() + 1 > 150)
		throw GradeTooLowException();
	this->_grade += 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}