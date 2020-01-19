#ifndef BULLET_CLASS_HPP
#define BULLET_CLASS_HPP
#include "GameObject.class.hpp"

class Bullet : public gameObject
{
public:
	//constructors
	Bullet( void );
	Bullet(int xPos, int yPos, bool direction);
//	Bullet(Bullet const &copy);

	//destructor
	~Bullet( void );

	//assign
	//Bullet &operator=(Bullet const &base);

	//actions
	void    move(int dir_x, int dir_y);

	//print
	void	printObject( void );
	void	printStatus( void );

	//gets
	bool    get_direction( void );

	//sets
	bool	set_direction( void );
private:
	//I wish I had organized the classes better.
	bool	_direction;
};

#endif