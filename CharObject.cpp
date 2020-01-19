/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharObject.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:05:00 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 11:05:00 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharObject.hpp"

/*
**	Constructors
*/

CharObject::CharObject(void)
{

}

CharObject::CharObject(const CharObject &other)
{
	*this = other;
}

/*
**	Destructor
*/

CharObject::~CharObject(void)
{

}

/*
**	Operator Overloaders
*/

CharObject		&CharObject::operator=(const CharObject &other)
{
	tmp;
}

/*
**	Other Member Functions
*/
