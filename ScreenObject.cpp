/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScreenObject.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 08:59:17 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:27:23 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ive only been compiling with the headers needed

#include "ScreenObject.hpp"
#include "GameObject.hpp"
#include <curses.h>
#include <iostream>

/*
**	Constructors
*/

ScreenObject::ScreenObject(void)
{
	getmaxyx(stdscr, height, width);	// ncurses macro to get size of the terminal
	//	these just need to be positioned for the box to be centered
	box_x_pos = 0;
	box_y_pos = 0;
	std::cout << "Screen Object created" << std::endl;
}

ScreenObject::ScreenObject(const ScreenObject &other)
{
	*this = other;
}

/*
**	Destructor
*/

ScreenObject::~ScreenObject(void)
{
	std::cout << "Screen Object destroyed" << std::endl;
}

/*
**	Operator Overloaders
*/

ScreenObject		&ScreenObject::operator=(const ScreenObject &other)
{
	width = other.width;
	height = other.height;
	box_x_pos = other.box_x_pos;
	box_y_pos = other.box_y_pos;
	return (*this);
}

/*
**	Other Member Functions
*/

void				ScreenObject::get_dimensions( void )
{
	getmaxyx(stdscr, height, width);
}

void				ScreenObject::draw_game()
{
	
}
