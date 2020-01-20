/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WeaponObject.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:04:35 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:26:32 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WeaponObject.hpp"

/*
**	Constructors
*/

WeaponObject::WeaponObject(void)
{
	damage = rand() % 100;
	speed = rand() % 4;
}

WeaponObject::WeaponObject(const WeaponObject &other)
{
	*this = other;
}

/*
**	Destructor
*/

WeaponObject::~WeaponObject(void)
{

}

/*
**	Operator Overloaders
*/

WeaponObject		&WeaponObject::operator=(const WeaponObject &other)
{
	damage = other.damage;
	speed = other.damage;
}

/*
**	Other Member Functions
*/
