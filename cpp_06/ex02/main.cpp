
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <cstdio>

static Base *generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return (new A());
		break;
	case 1:
		return (new B());
		break;
	case 2:
		return (new C());
		break;
	default:
		perror("Something went wrong with the random generator");
		return (NULL);
	}
}

static void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A is the identified type" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B is the identified type" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C is the identified type" << std::endl;
	else
		std::cout << "unknown type" << std::endl;
}

static void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A is the identified type" << std::endl;
		return;
	}
	catch (std::exception &) {}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B is the identified type" << std::endl;
		return;
	}
	catch (std::exception &) {}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C is the identified type" << std::endl;
		return;
	}
	catch (std::exception &) {}
}

int main()
{
	srand(time(NULL));
	for (int j = 0; j < 3; j++)
	{
		Base *Test = generate();
		if (Test == NULL)
			return (1);
		else
		{
			identify(Test);
			identify(*Test);
			delete (Test);
			std::cout << std::endl;
		}
	}
	return (0);
}