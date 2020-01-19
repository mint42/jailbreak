#include "Player.class.hpp"
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
Player::Player( void )
{
	_hp = 100;
	_maxHp = 100;
	set_xPos(0); //player start on the left
	set_yPos(get_maxX() / 2);
	set_Id('◊');
	print("Player Default constructor called");
}

Player::Player(Player const &copy)
{
	*this = copy;
	print("Player Copy constructor called");
}

//destructor
Player::~Player( void )
{
	print("~~ Player destroyed!");
}

//assign
Player &Player::operator=(Player const &base)
{
	_hp = base._speed;
	_maxHp = base._speed;
	return *this;
}

//actions

//about move():
//((RIGHT)) ((POSITIVE X))
//((LEFT))  ((NEGATIVE X))
// ((UP))   ((POSITIVE Y))
//((DOWN))  ((NEGATIVE Y))
void    Player::move(int x_dir, int y_dir)
{
	//if the Player is moving to the right and is the end of screen, he stops moving
	if ((x_dir > 0 && get_xPos() == get_maxX()) || (x_dir < 0 && get_xPos() == 0) ||
	 (y_dir > 0 && get_yPos() == get_maxY()) || (y_dir < 0 && get_yPos() ==0))
		return ;
	else {
		this->set_xPos(get_xPos() + x_dir);
		this->set_yPos(get_yPos() + y_dir);
	}
}

//prints
void	Player::printStatus( void )
{
	print("_______________status_______________");
	print("       ___about_the_object___");
	printObject();
	cout << "[ Id: " << get_Id() << " ] [ X Size: " << get_xSize() << " ] [ Y Size: " << get_ySize() << " ]" << endl;
	cout << "[ Y_pos: " << get_yPos() << " ] [ X_pos: " << get_xPos() <<  " ]" << endl;
	cout << "[ HP: " << get_hp() <<  " ] [ Max HP: " << get_maxHp() <<  " ]" << endl;
	print("       ___about_the_game___");
	cout << "[ Level: " << get_lvl() << " ] [ Points to next level: " << get_ptsToNextLvl() << " ]" << endl;
	cout << "[ Max X: " << get_maxX() << " ] [ Max Y: " << get_maxY() <<  " ]" << endl;
	print("_____________________________________");
}

//gets
unsigned int    Player::get_hp( void )
{
	return this->_hp;
}
unsigned int	Player::get_maxHp( void )
{
	return this->_maxHp;
}

//sets
void    Player::set_hp(unsigned int new_value)
{
	this->_hp = new_value;
}
void	Player::set_maxHp(unsigned int new_value)
{
	this->_maxHp = new_value;
}