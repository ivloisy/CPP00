/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:17:27 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/04 15:06:52 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <ctime>

Account::Account(void)
{
}

Account::Account(int initial_deposit)
{
}

Account::~Account(void)
{
}

static void	Account::_displayTimestamp(void)
{
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[19];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer,19,"[%Y%m%d_%H%M%S] ",timeinfo);
	std::cout << buffer;
}