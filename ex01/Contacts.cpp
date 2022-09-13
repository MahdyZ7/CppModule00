/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:03:49 by ayassin           #+#    #+#             */
/*   Updated: 2022/09/13 15:49:10 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include <string>

Contacts::Contacts()
{
	setFirstName("");
	setLastName("");
	setNickname("");
	setPhoneNumber("");
	setSecret("");	
}

Contacts::Contacts(string firts_name, string last_name, string nickname, string
	phone_number, string darkest_secret)
{
	setFirstName(firts_name);
	setLastName(last_name);
	setNickname(nickname);
	setPhoneNumber(phone_number);
	setSecret(darkest_secret);	
}

Contacts::~Contacts(){}