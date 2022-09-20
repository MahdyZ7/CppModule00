/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:38:37 by ayassin           #+#    #+#             */
/*   Updated: 2022/09/13 16:12:14 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(Contact person);
		int		printContacts(void);
		int		printIndex(int i);
	private:
		Contact	arr[8];
		int		tail;
		int		len;
		int 	size;
};

#endif