/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:19:24 by aconchit          #+#    #+#             */
/*   Updated: 2022/03/21 13:07:48 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define	POINT_H

# include "Fixed.h"

/* Point Class */

class Point {
	Fixed	x;
	Fixed	y;
public:
	Point();
	Point(float x, float y);
	Point(const Point &copy);
	Point&	operator=(const Point &copy);
	Fixed	getX();
	Fixed	getY();
	~Point();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif