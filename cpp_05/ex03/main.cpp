
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	srand(time(NULL));

	try
	{
		Bureaucrat boss("Boss", 1);

		ShrubberyCreationForm shrub("home");
		RobotomyRequestForm robot("marvin");
		PresidentialPardonForm pardon("Arthur Dent");

		shrub.beSigned(boss);
		robot.beSigned(boss);
		pardon.beSigned(boss);

		boss.executeForm(shrub);
		boss.executeForm(robot);
		boss.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}