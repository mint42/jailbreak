/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 10:39:07 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:09:03 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameObject.class.hpp"

//constructors
GameObject::GameObject( void )
{
	_maxX = 0;
	_maxY = 0;
	_xPos = 0;
	_yPos = 0;
	_Id = '.';
	print("GameObject Default constructor called");
}

GameObject::GameObject(enum type)
{
	gen_Id(enum type);
	gen_xPos(enum type);
	gen_yPos(enum type);
	gen_maxX(enum type);
	gen_maxY(enum type);
	gen_xSize(enum type);
	gen_ySize(enum type);
	print("GameObject parameterized constructor called");
}

GameObject::GameObject(GameObject const &copy)
{
	*this = copy;
	print("GameObject Copy constructor called");
}

//destructor
GameObject::~GameObject( void )
{
	print("GameObject Destroyed");
}

//assign
GameObject &GameObject::operator=(GameObject const &base)
{
	_xPos = base._xPos;
	_yPos = base._yPos;
	_maxY = base._maxY;
	_maxX = base._maxX;
	_xSize = base._xSize;
	_ySize = base._ySize;
	_Id = base._Id;
	_Type = base._Type;
	print("GameObject Assignation operator called");
	return *this;
}

/*
**	//prints
**	void	GameObject::printObject( void )
**	{
**		int line = get_ySize();
**		int size = get_xSize();
**		while (line > 0)
**		{
**			while (size > 0)
**			{
**				cout << get_Id();
**				size--;
**			}
**			cout << endl;
**			line--;
**			size = get_xSize();
**		}
**	}
*/

//gets
unsigned int     GameObject::get_xPos( void )
{
	return this->_xPos;
}

unsigned int    GameObject::get_yPos( void )
{
	return this->_yPos;
}

unsigned int    GameObject::get_maxX( void )
{ return this->_maxX;
}

unsigned int    GameObject::get_maxY( void )
{
	return this->_maxY;
}

int             GameObject::get_xSize( void )
{
	return this->_xSize;
}

int             GameObject::get_ySize( void )
{
	return this->_ySize;
}

char     		GameObject::get_Id( void )
{
	return this->_Id;
}

//sets
void      GameObject::set_xPos(unsigned int value)
{
	xPos = value;
}

void     GameObject::set_yPos(unsigned int value)
{
	_yPos = value;
}

void     GameObject::set_maxX(unsigned int value)
{
	_maxX = value;
}

void     GameObject::set_maxY(unsigned int value)
{
	_maxY = value;
}

void     GameObject::set_xSize(int value)
{
	_XSize = value;
}

void     GameObject::set_ySize(int value)
{
	_ySize = value;
}

void     GameObject::set_Id(char value)
{
	_Id = value;
}

// generators
void    GameObject::gen_xPos(enum type)
{
	switch (type)
	{
		case PLAYER
		case ENEMY
		case BULLET
		case SCENERY
	}
}

void    GameObject::gen_yPos(enum type)
{
	switch (type)
	{
		case PLAYER
		case ENEMY
		case SCENERY
		{
			while (check_collision(x, y)
		}
	}
}

void    GameObject::gen_maxX(enum type)
{
	_maxX = 1;
//	switch (type)
//	{
//		case PLAYER
//		case ENEMY
//		case BULLET
//		case SCENERY
//	}
}

void    GameObject::gen_maxY(enum type)
{
	_maxY = 1;
//	switch (type)
//	{
//		case PLAYER
//		case ENEMY
//		case BULLET
//		case SCENERY
//	}
}

void    GameObject::gen_xSize(enum type)
{
	_xSize = 1;
//	switch (type)
//	{
//		case PLAYER
//		case ENEMY
//		case BULLET
//		case SCENERY
//	}
}

void    GameObject::gen_ySize(enum type)
{
	_ySize = 1;
//	switch (type)
//	{
//		case PLAYER
//		case ENEMY
//		case BULLET
//		case SCENERY
//	}
}
