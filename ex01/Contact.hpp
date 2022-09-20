/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:24:45 by ayassin           #+#    #+#             */
/*   Updated: 2022/09/13 15:55:30 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP
#include <iostream>
#include <iomanip>

class Contact {
	public:
		Contact();
		Contact(std::string firts_name, std::string last_name,
			std::string nickname, std::string phone_number, std::string secret);
		~Contact();
		int			setFirstName(std::string str);
		int			setLastName(std::string str);
		int			setNickname(std::string str);
		int			setPhoneNumber(std::string str);
		int			setSecret(std::string str);
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getSecret(void) const;
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif