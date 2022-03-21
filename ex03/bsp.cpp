/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:39:50 by aconchit          #+#    #+#             */
/*   Updated: 2022/03/21 14:26:18 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

enum BSP{
	ZER,
	POS,
	NEG
};

BSP	checkPoint(Point a, Point b, Point point){
	Fixed	left;
	Fixed	right;
	int		res;

	left = (a.getX() - point.getX()) * (b.getY() - a.getY());
	right = (b.getX() - a.getX()) * (a.getY() - point.getY());
	res = (left - right).toInt();
	if (res > 0)
		return POS;
	else if (res == 0)
		return ZER;
	else
		return NEG;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point){
	if (checkPoint(a, b, point) == ZER || checkPoint(c, a, point) == ZER \
	|| checkPoint(b, c, point) == ZER)
		return true;
	if (checkPoint(a, b, point) == checkPoint(c, a, point) && \
	checkPoint(c, a, point) == checkPoint(b, c, point))
		return true;
	return false;
}