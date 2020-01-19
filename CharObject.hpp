/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharObject.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:05:00 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 11:05:00 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CharObject_HPP
# define CharObject_HPP

class			CharObject
{
	public:
		CharObject(void);
		CharObject(const CharObject &other);
		~CharObject(void);
		CharObject		&operator=(const CharObject &other);

	private:
		tmp;
};

#endif
