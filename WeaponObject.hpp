/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WeaponObject.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:04:35 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:26:24 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WeaponObject_HPP
# define WeaponObject_HPP

class			WeaponObject
{
	public:
		WeaponObject(void);
		WeaponObject(const WeaponObject &other);
		~WeaponObject(void);
		WeaponObject		&operator=(const WeaponObject &other);
		unsigned int		get_damage( void );
		unsigned int		get_speed( void );

	private:
		unsigned int		damage;
		unsigned int		speed;
		MovingObject		bullets[10];
};

#endif
