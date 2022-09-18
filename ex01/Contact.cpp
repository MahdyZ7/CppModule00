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

#include "Contact.hpp"

Contact::Contact()
{
	setFirstName("");
	setLastName("");
	setNickname("");
	setPhoneNumber("");
	setSecret("");	
}

Contact::Contact(std::string fname, std::string lname, 
	std::string nname, std::string pnumber, std::string scrt)
{
	setFirstName(fname);
	setLastName(lname);
	setNickname(nname);
	setPhoneNumber(pnumber);
	setSecret(scrt);	
}

Contact::~Contact(){}

int Contact::setFirstName(std::string str)
{
	if (str.empty())
		return (1);
	first_name.assign(str);
	return (0);
}

int Contact::setLastName(std::string str)
{
	if (str.empty())
		return (1);
	last_name.assign(str);
	return (0);
}

int Contact::setNickname(std::string str)
{
	if (str.empty())
		return (1);
	nickname.assign(str);
	return (0);
}

int Contact::setPhoneNumber(std::string str)
{
	if (str.empty())
		return (1);
	for(size_t i = 0; i < str.size(); ++i)
		if(!isdigit(str[i]))
			return (1);
	phone_number.assign(str);
	return (0);
}

int Contact:: setSecret(std::string str)
{
	if (str.empty())
		return (1);
	darkest_secret.assign(str);
	return (0);
}

std::string Contact::getFirstName(void) const
{
	return (first_name);
}

std::string Contact::getLastName(void) const
{
	return(last_name);
}

std::string Contact::getNickname(void) const
{
	return(nickname);
}

std::string Contact::getPhoneNumber(void) const
{
	return(phone_number);
}

std::string Contact::getSecret(void) const
{
	return(darkest_secret);
}