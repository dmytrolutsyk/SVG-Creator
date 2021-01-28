//
// Created by VIDAL Léo on 28/01/2021.
//

#include "Circle.h"

Circle::Circle(int centerX, int centerY, float radius){
    this->m_center = Point(centerX, centerY);
    this->m_radius = radius;
}

Point Circle::getCenter(){
    return this->m_center;
}

float Circle::getRadius(){
    return this->m_radius;
}

void Circle::setRadius(float value){
    this->m_radius = value;
}

void Circle::setCenter(Point newCenter){
    this->m_center = newCenter;
}