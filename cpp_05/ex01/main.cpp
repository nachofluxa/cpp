
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	std::cout << "===== TEST 1: Formulario válido =====" << std::endl;
	try
	{
		Form f("Contrato", 50, 25);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 2: Grado demasiado alto =====" << std::endl;
	try
	{
		Form f("TopSecret", 0, 10);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 3: Grado demasiado bajo =====" << std::endl;
	try
	{
		Form f("Basura", 151, 150);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 4: Firma correcta =====" << std::endl;
	try
	{
		Bureaucrat jefe("Jefe", 10);
		Form permiso("Permiso", 20, 20);

		std::cout << permiso << std::endl;

		permiso.beSigned(jefe);

		std::cout << permiso << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 5: Firma fallida =====" << std::endl;
	try
	{
		Bureaucrat becario("Becario", 100);
		Form secreto("Documento Secreto", 50, 50);

		std::cout << secreto << std::endl;

		secreto.beSigned(becario);

		std::cout << secreto << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Excepción capturada: " << e.what() << std::endl;
	}

	return 0;
}
