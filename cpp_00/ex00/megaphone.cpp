/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:38:00 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/01/20 10:38:04 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i;
    int j;
    
    i = 0;
    j = -1;
    if (argc == 1)
        cout << "You should tell me something\n";
    else
    {
        while (argv[++i])
        {
            while (argv[i][++j])
            {
                if (argv[i][j] >= 'a' || argv[i][j] <= 'z')
                    cout << (char)toupper(argv[i][j]);
            }
            j = -1;
        }
        cout << endl;
    }

    return (0);
}