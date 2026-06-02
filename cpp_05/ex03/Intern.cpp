
#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &other) {(void)other;}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return(*this);
}

Intern::~Intern() {}

static AForm *createShrubbery(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

static AForm *createRobotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

static AForm *createPresidential(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) const
{
	struct FormPair
	{
		std::string name;
		AForm *(*creator)(const std::string &);
	};

	static const FormPair forms[] =
	{
		{"shrubbery creation", createShrubbery},
		{"robotomy request", createRobotomy},
		{"presidential pardon", createPresidential}
	};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i].name == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i].creator(target);
		}
	}

	std::cerr << "Error: unknown form \"" << formName << "\""
			  << std::endl;
	return NULL;
}
