/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:38:00 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/18 12:55:55 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = -1;
	if (argc == 1)
		std::cout << "You should tell me something\n";
	else
	{
		while (argv[++i])
		{
			while (argv[i][++j])
			{
				if (argv[i][j] >= 'a' || argv[i][j] <= 'z')
					std::cout << (char)toupper(argv[i][j]);
			}
			j = -1;
		}
		std::cout << std::endl;
	}

	return (0);
}