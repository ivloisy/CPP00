/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 16:00:46 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/04 01:42:36 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		
	public:
		Contact(void);
		~Contact();
		void		setContact(std::string info[5]);
		std::string	getInfo(int n);
};

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setContact(std::string info[5])
{
	this->_first_name = info[0];
	this->_last_name = info[1];
	this->_nickname = info[2];
	this->_phone_number = info[3];
	this->_darkest_secret = info[4];
/* 	std::cout << std::endl << info[0] << " " << info[1]
	<< " has been added to the PhoneBook.\n" << std::endl; */
	return ;
}

std::string	Contact::getInfo(int n)
{
	if (n == 0)
		return (this->_first_name);
	else if (n == 1)
		return (this->_last_name);
	else if (n == 2)
		return (this->_nickname);
	else if (n == 3)
		return (this->_phone_number);
	else if (n == 4)
		return (this->_darkest_secret);
	else
		return (NULL);
}

#endif