
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm",
	72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::executeAction() const
{
	std::cout << "* drilling noises *" << std::endl;

	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy failed on " << _target << std::endl;
}