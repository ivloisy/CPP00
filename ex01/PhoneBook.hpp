/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 14:35:06 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/04 01:27:50 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdio>

class PhoneBook
{
	private:
		Contact	_contact[8];
		int		_total;
		bool	_cmd_add(void);
		bool	_cmd_search(int n);

	public:
		PhoneBook(void);
		~PhoneBook();
		bool		getCommand(void);
		int			chooseIndex(void);
		int			chooseContact(void);
		std::string	printInfo(std::string s);
		void		printContact(void);
};

PhoneBook::PhoneBook(void)
{
	std::cout << "***************** PHONEBOOK *****************" << std::endl;
	this->_total = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "****************** GOODBYE ******************" << std::endl;
	return ;
}

#endif