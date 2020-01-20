/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MovingObject.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:04:10 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:13:50 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MovingObject.hpp"

/*
**	Constructors
*/

MovingObject::MovingObject(int x, int y, unsigned int speed, enum type)
{
	moving = FALSE;
	speed = s;
	x_direction = x;
	y_direction = y;
	GameObject::setup(type);
}

MovingObject::MovingObject(const MovingObject &other)
{
	*this = other;
}

/*
**	Destructor
*/

MovingObject::~MovingObject(void)
{
}

/*
**	Operator Overloaders
*/

MovingObject		&MovingObject::operator=(const MovingObject &other)
{
	moving = 0;
	speed = 0;
	x_direction = 0;
	y_direction = 0;
	//copy over parent information
}

/*
**	Other Member Functions
*/
