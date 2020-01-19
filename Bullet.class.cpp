#include "Bullet.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <istream>
#include <sstream>
#include <time.h>

using namespace std;
#define print(x)  cout << x << endl;

//constructors
Bullet::Bullet( void ) : _direction(0)
{
	set_xPos(0); //Bullet start on the x and y passed to it, without it, is 0
	set_yPos(get_maxX() / 2);
	set_Id('o');
	print("Bullet Default constructor called");
}
//this is the constructor that the enemies and the player should call
Bullet::Bullet(int xPos, int yPos, bool direction) : _direction(direction)
{
	set_xPos(xPos);
	set_yPos(yPos);
	set_Id('o');
	print("Bullet position constructor called");
}
/*Bullet::Bullet(Bullet const &copy) : _direction(0)
{
	*this = copy;
	print("Bullet Copy constructor called");
}*/

//destructor
Bullet::~Bullet( void )
{
	print("~~ Bullet destroyed!");
}

//assign
//Bullet &Bullet::operator=(Bullet const &base)
//{
//	return *this;
//}

//actions

//about move():
//only one direction will b available by the boolean direction set in the creation of the class
//((RIGHT)) ((POSITIVE X))
//((LEFT))  ((NEGATIVE X))
void    Bullet::move(int x_dir, int y_dir)
{
	//bullet shouldnt move up or down
	y_dir = 0;
	//checks boolean and changes it if needed.
	if ((this->_direction == 0 && x_dir < 0) || (this->_direction == 1 && x_dir > 0))
		x_dir = x_dir * -1;
	//if the Bullet is moving to the right/left and is the end/start of screen, It is destroyed
	if ((x_dir > 0 && get_xPos() == get_maxX()) || (x_dir < 0 && get_xPos() == 0))
		Bullet::~Bullet();
	else {
		this->set_xPos(get_xPos() + x_dir);
		this->set_yPos(get_yPos() + y_dir);
	}
}

//prints
void	Bullet::printObject( void )
{
	print(get_Id());
}

void	Bullet::printStatus( void )
{
	print("_______________status_______________");
	print("       ___about_the_object___");
	printObject();
	cout << "[ Id: " << get_Id() << " ]"<< endl;
	cout << "[ Y_pos: " << get_yPos() << " ] [ X_pos: " << get_xPos() <<  " ]" << endl;
	print("       ___about_the_game___");
	cout << "[ Level: " << get_lvl() << " ] [ Points to next level: " << get_ptsToNextLvl() << " ]" << endl;
	cout << "[ Max X: " << get_maxX() << " ] [ Max Y: " << get_maxY() <<  " ]" << endl;
	print("_____________________________________");
}

//gets
bool	Bullet::get_direction( void )
{
	return this->_direction;
}