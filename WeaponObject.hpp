/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WeaponObject.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:04:35 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 11:04:35 by rreedy           ###   ########.fr       */
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

	private:
		tmp;
};

#endif
