
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
	Intern someRandomIntern;

	AForm *rrf =
		someRandomIntern.makeForm("robotomy request", "Bender");

	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}

	return 0;
}
