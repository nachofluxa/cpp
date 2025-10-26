/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:36:16 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/26 12:10:51 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <stdlib.h>
#include <iostream>

void	leaks_check( void )
{
	system("leaks AnimalExec");
}

int main()
{
	atexit(leaks_check);
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	Dog k;
	Dog l( k );
	Cat m;
	Cat n( m );

	m = n;
	l = k;

	delete j;
	system("leaks Animals_test2");
	delete i;
	system("leaks Animals_test2");
	return 0;
}
