/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:36:16 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/26 00:46:07 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	const Animal* a = new Dog;
	const Animal* b = new Cat;
	
	delete a;
	delete b;
	system("leaks Abstract");
}
