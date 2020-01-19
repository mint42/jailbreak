#include "RangeEnemy.class.hpp"
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

RangeEnemy::RangeEnemy( void )
{
	set_dmg(1 * get_lvl());
	set_hp(1 * get_lvl());
	set_maxHp(1 * get_lvl());
	set_xSize(4);
	set_ySize(2);

	print("RangeEnemy Default constructor called");
}
RangeEnemy::RangeEnemy(RangeEnemy const &copy)
{
	*this = copy;
	print("RangeEnemy Copy constructor called");
}
//destructor
RangeEnemy::~RangeEnemy( void )
{
	print("RangeEnemy Destroyed");
}

//assign
/*RangeEnemy &RangeEnemy::operator=(RangeEnemy const &base)
{

	return *this;
}*/

//actions
/*Bullet   [2]RangeEnemy::rangeAtack( void )
{
//	Bullet all_shots[2];
//	Bullet[0] = Bullet(get_xPos(), get_yPos() - 1, 1);
//	Bullet two_shot[1] = Bullet(get_xPos(), get_yPos(), 1);
//	Bullet three_shot[2] = Bullet(get_xPos(), get_yPos() + 1, 1);
//	return (all_shots);
}*/

//prints
void	RangeEnemy::printStatus( void )
{
	print("____________Range__Enemy____________");
	Enemy::printStatus();
}