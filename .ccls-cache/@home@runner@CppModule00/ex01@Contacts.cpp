/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:03:49 by ayassin           #+#    #+#             */
/*   Updated: 2022/09/13 15:55:12 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts()
{
	setFirstName("");
	setLastName("");
	setNickname("");
	setPhoneNumber("");
	setSecret("");	
}

Contacts::Contacts(std::string firts_name, std::string last_name, 
	std::string nickname, std::string phone_number, std::string secret)
{
	setFirstName(firts_name);
	setLastName(last_name);
	setNickname(nickname);
	setPhoneNumber(phone_number);
	setSecret(secret);	
}

Contacts::~Contacts(){}