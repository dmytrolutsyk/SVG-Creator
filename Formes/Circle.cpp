//
// Created by Dima on 23/01/2021.
//

#include "Circle.h"

Circle::Circle(float &x, float &y , float &radius){
    this->m_center = Point(x, y);
    this-> m_radius = radius;
}

void Circle::setCenter(Point center)
{
    this->m_center = center;
}

void Circle::setRadius(float &radius)
{
    this->m_radius = radius;
}

Point Circle::getCenter()
{
    return this->m_center;
}

float Circle::getRadius()
{
    return this->m_radius;
}

void Circle::add(Point point){
    float x = this->m_center.getX() + point.getX();
    float y = this->m_center.getY() + point.getY();

    this->m_center.setX(x);
    this->m_center.setY(y);
}