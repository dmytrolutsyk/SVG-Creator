//
// Created by Dima on 28/12/2020.
//

#include "Point.h"

Point::Point() {
    this->m_x = 0;
    this->m_y = 0;
}

Point::Point(int x, int y){
    this-> m_x = x;
    this-> m_y = y;
}

void Point::setX(int x)
{
    this->m_x = x;
}

void Point::setY(int y)
{
    this->m_y = y;
}

int Point::getX()
{
    return this->m_x;
}

int Point::getY() {
    return this->m_y;
}

void Point::add(Point Point){
    this->m_x = m_x + Point.m_x;
    this->m_y = m_y + Point.m_y;
}