/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharObject.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:05:00 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:24:51 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharObject.hpp"

/*
**	Constructors
*/

static unsigned int CharObject::max_hp = 100;

CharObject::CharObject(void)
{
	hp = 100;
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

unsigned int		CharObjects::get_hp( void )
{
	return (hp);
}

const unsigned int	CharObjects::get_max_hp( void )
{
	return (max_hp);
}

Weapon				CharObjects::get_weapon( void )
{
	return (weapon);
}

void				CharObjects::set_hp(unsigned int new_hp)
{
	if ((int)new_hp < 0)
		hp = 0;
	else if (new_hp > max_hp)
		hp = max_hp;
	else
		hp = new_hp;
}

