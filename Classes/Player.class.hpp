#ifndef PLAYER_CLASS_HPP
#define PLAYER_CLASS_HPP

#include "GameObject.class.hpp"

class Player : public GameObject
{
public:
	//constructors
	Player( void );
	Player(Player const &copy);

	//destructor
	~Player( void );

	//assign
	Player &operator=(Player const &base);

	//actions
	void    move(int dir_x, int dir_y);
	void	shoot( void );

	//prints
	void	printStatus( void );

	//gets
	unsigned int    get_hp( void );
	unsigned int	get_maxHp( void );

	//sets
	void    set_hp(unsigned int new_value);
	void	set_maxHp(unsigned int new_value);

private:
	unsigned int	_hp;
	unsigned int	_maxHp;
};

#endif