/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:03:31 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/01/30 13:22:59 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string.h>

using namespace std;

class Contact{
    private:
        string first_name;
        string last_name;
        string nickname;
        string secret;
        string phone_number;

    public:
        void set_contact_info(int type, string info);
        string get_contact_info(int type);
};


#endif