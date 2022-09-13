/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:24:45 by ayassin           #+#    #+#             */
/*   Updated: 2022/09/13 15:50:06 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_H
#define CONTACTS_CLASS_H
#include <iostream>
#include <string>
class Contacts {
	public:
		Contacts();
		Contacts(const Contacts &copy);
		Contacts(string firts_name, string last_name, string nickname, string
			phone_number, string darkest_secret);
		~Contacts();
		// comparision	
		void	setFirstName(string str);
		void	setLastName(string str);
		void	setNickname(string str);
		void	setPhoneNumber(string str);
		void	setSecret(string str);
		string	getFirstName(string str);
		string	getLastName(string str);
		string	getNickname(string str);
		string	getPhoneNumber(string str);
		string	getSecret(string str);
	private:
		string	firts_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
};

#endif