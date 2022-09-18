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

#ifndef CONTACTS_CLASS_H
#define CONTACTS_CLASS_H
#include <iostream>
class Contacts {
	public:
		Contacts();
		Contacts(const Contacts &copy);
		Contacts(std::string firts_name, std::string last_name,
			std::string nickname, std::string phone_number, std::string secret);
		~Contacts();
		// comparision	
		void		setFirstName(std::string str);
		void		setLastName(std::string str);
		void		setNickname(std::string str);
		void		setPhoneNumber(std::string str);
		void		setSecret(std::string str);
		std::string	getFirstName(std::string str);
		std::string	getLastName(std::string str);
		std::string	getNickname(std::string str);
		std::string	getPhoneNumber(std::string str);
		std::string	getSecret(std::string str);
	private:
		std::string	firts_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif