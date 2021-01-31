//
// Created by Dima on 09/01/2021.
//

#include <iostream>
#include "Polygone.h"

Polygone Polygone::create() {
    Polygone polygone = Polygone();
    std::cout << "Afin de créer un polygone nous n'aurons besoin que d'une seule information : \n";
    std::cout << "- une liste de point de minimum deux points \n";
    polygone.addPoint();
    return polygone;
}


Polygone::Polygone() {}

Polygone::Polygone(std::vector<Point> listPoint) {
    this->listPoint = listPoint;
}

void Polygone::addPoint() {
    std::cout << "Création d'un point du polygone : \n";
    int anOther;
    Point pointToAdd = Point::create();
    this->listPoint.push_back(pointToAdd);
    std::cout << "Si vous voulez ajouter un autre point a votre polygone taper 1 sinon autre :";
    std::cin >> anOther;
    if(anOther == 1) this->addPoint();
}

std::vector<Point> Polygone::getListPoint() {return this->listPoint;}

void Polygone::draw() {

}
