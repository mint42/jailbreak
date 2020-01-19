/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MovingObject.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:04:10 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 11:41:52 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MovingObject_HPP
# define MovingObject_HPP

class			MovingObject
{
	public:
		MovingObject(void);
		MovingObject(const MovingObject &other);
		~MovingObject(void);
		MovingObject		&operator=(const MovingObject &other);

	private:
		bool				moving;
		unsigned int		speed;
		int					x_direction;
		int					y_direction;
};

#endif
