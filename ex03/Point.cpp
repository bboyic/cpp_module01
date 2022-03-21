/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconchit <aconchit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:29:56 by aconchit          #+#    #+#             */
/*   Updated: 2022/03/21 13:08:04 by aconchit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point(){

}

Point::Point(float x, float y):x(x), y(y){}

Point::Point(const Point &copy):x(copy.x), y(copy.y){}

Point&	Point::operator=(const Point &copy){
	x = copy.x;
	y = copy.y;
	return (*this);
}

Fixed	Point::getX(){return (x);}

Fixed	Point::getY(){return (y);}

Point::~Point(){}
