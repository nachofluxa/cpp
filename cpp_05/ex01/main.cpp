#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat intern("Intern", 150);

		Form taxForm("Tax Form", 50, 25);
		Form internForm("Intern Form", 150, 150);

		std::cout << taxForm << std::endl;
		std::cout << internForm << std::endl;

		intern.signForm(taxForm);
		intern.signForm(internForm);

		std::cout << taxForm << std::endl;
		std::cout << internForm << std::endl;

		boss.signForm(taxForm);

		std::cout << taxForm << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
