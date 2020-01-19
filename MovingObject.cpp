/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MovingObject.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:04:10 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 11:41:52 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MovingObject.hpp"

/*
**	Constructors
*/

MovingObject::MovingObject(void)
{
	moving = 0;
	speed = 0;
	x_direction = 0;
	y_direction = 0;
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
}

/*
**	Other Member Functions
*/
