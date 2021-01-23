//
// Created by Dima on 28/12/2020.
//

#include "Point.h"
Point::Point(float x, float y){
    this-> m_x = x;
    this-> m_y = y;
}

void Point::setX(float& x)
{
    this->m_x = x;
}

void Point::setY(float& y)
{
    this->m_y = y;
}

float Point::getX()
{
    return this->m_x;
}

float Point::getY() {
    return this->m_y;
}

void Point::add(Point Point){
    this->m_x = m_x + Point.m_x;
    this->m_y = m_y + Point.m_y;
}