//
// Created by VIDAL Léo on 28/01/2021.
//

#include <iostream>
#include "Line.h"

Line::Line(Point a, Point b) {
    this->a = a;
    this->b = b;
}

Line Line::create() {
    Point a;
    Point b;
    std::cout << "Afin de créer un segment nous aurons besoin de deux informations : \n";
    std::cout << "- Un point A : \n";
    std::cout << "- Un Point B \n";
    std::cout << " Tout d'abord commençon par créer le point A : \n";
    a = Point::create();
    std::cout << " Maintenant passons au point B :  \n";
    b = Point::create();
    return Line(a,b);
}

Line::Line() {}

Point Line::getA() {return this->a;}
Point Line::getB() {return this->b;}

void Line::draw() {

}
