/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharObject.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:05:00 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:24:54 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CharObject_HPP
# define CharObject_HPP

class			CharObject : public MovingObject, public GameObject
{
	public:
		CharObject(void);
		CharObject(const CharObject &other);
		~CharObject(void);
		CharObject		&operator=(const CharObject &other);
		unsigned int	get_hp( void );
		const unsigned int	get_max_hp( void );
		Weapon				get_weapon( void );
		void		set_hp(unsigned int new_hp);

	private:
		unsigned int		hp;
		const unsigned int	max_hp;
		Weapon				weapon;
};

#endif
