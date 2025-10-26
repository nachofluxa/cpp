/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:36:16 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/26 12:12:16 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <stdlib.h>
#include <iostream>

int main()
{
	const Animal* a = new Dog;
	const Animal* b = new Cat;
	
	delete a;
	delete b;
	system("leaks AnimalExec");
}
