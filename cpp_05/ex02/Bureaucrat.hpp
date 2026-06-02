
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string.h>

class AForm;

class Bureaucrat
{
	private:
		std::string _name;
		int			_grade;

	public:

		Bureaucrat();
		Bureaucrat(const std::string &_name, int _grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		const std::string &getName() const;
		int	getGrade() const;

		void	incrementGrade();
		void	decrementGrade();

		void	signForm(AForm &form);
		void	executeForm(AForm const &form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif
