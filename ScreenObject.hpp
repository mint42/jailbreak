/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScreenObject.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 08:59:17 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 09:11:14 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREENOBJECT_HPP
# define SCREENOBJECT_HPP

class						ScreenObject
{
	public:
		ScreenObject(void);
		ScreenObject(const ScreenObject &other);
		~ScreenObject(void);
		ScreenObject		&operator=(const ScreenObject &other);
		void				get_dimensions( void );
		void				screen.draw_game(const GameObject &game);

	private:
		static const int	min_width;
		static const int	min_height;
		static const int	box_width;
		static const int	box_height;
		int					width;
		int					height;
		int					box_x_pos;
		int					box_y_pos;
};

#endif
