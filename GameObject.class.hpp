/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 09:17:25 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:02:09 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEOBJECT_CLASS_HPP
#define GAMEOBJECT_CLASS_HPP

class				GameObject
{
	public:
		//constructors
		gameObject( void );
		gameObject(enum type);
		gameObject(gameObject const &copy);

		//destructor
		~gameObject( void );

		//assign
		gameObject       &operator=(gameObject const &base);

		//gets
		unsigned int    get_xPos( void );
		unsigned int    get_yPos( void );
		unsigned int    get_maxX( void );
		unsigned int    get_maxY( void );
		int             get_xSize( void );
		int             get_ySize( void );
		char            get_Id( void );

		//sets
		void   set_Id(char value);
		void   set_xPos(unsigned int value);
		void   set_yPos(unsigned int value);
		void   set_maxX(unsigned int value);
		void   set_maxY(unsigned int value);
		void   set_xSize(int value);
		void   set_ySize(int value);

		// generate new attributes
		void    gen_xPos(enum type);
		void    gen_yPos(enum type);
		void    gen_maxX(enum type);
		void    gen_maxY(enum type);
		void    gen_xSize(enum type);
		void    gen_ySize(enum type);

		void	create_new_player( void );
		void	create_new_enemy( void );
		void	create_new_bullet( void );
		void	create_new_scenery( void );

		void	handle_collision(enum type1, enum type2, void *object1, void *object2);

		void	setup(void);

	private:
		unsigned int        _xPos;
		unsigned int        _yPos;
		unsigned int        _maxY;
		unsigned int        _maxX;
		int                 _xSize;
		int                 _ySize;
		char                _Id;
		unsigned int        _lvl;
		enum				_Type
		{
			PLAYER = 1;			// CharacterObject
			ENEMY;				// CharacterObject
			BULLET;				// MovingObject
			SCENERY;			// GameObject
		};
};

#endif
