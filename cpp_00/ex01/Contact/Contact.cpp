/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:03:28 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/01/20 12:32:12 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

void Contact::set_contact_info(int type, string info)
{
    if (type == 1)
        this->first_name = info;
    else if (type == 2)
        this->last_name = info;
    else if (type == 3)
        this->nickname = info;
    else if (type == 4)
        this->secret = info;
    else if (type == 5)
        this->phone_number = info;
}

string Contact::get_contact_info(int type)
{
    if (type == 1)
        return this->first_name;
    else if (type == 2)
        return this->last_name;
    else if (type == 3)
        return this->nickname;
    else if (type == 4)
        return this->secret;
    else //if (type == 5)
        return this->phone_number;
}