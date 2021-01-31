//
// Created by Dima on 20/12/2020.
//

#include <iostream>
#include "Rectangle.h"

Rectangle Rectangle::create() {
    int L;
    int H;
    Point corner;
    std::cout << "Afin de créer un rectangle nous aurons besoin de trois informations : \n";
    std::cout << "- La hauteur : \n";
    std::cout << "- La largeur \n";
    std::cout << "- Et le point correspondant au coin supérieur du rectangle \n";
    std::cout << " Tout d'abord veuillez saisir la hauteur : ";
    std::cin >> L;
    std::cout << "\n Maintenant la largeur : ";
    std::cin >> H;
    std::cout << "\n Passons a la création du coin supérieur :";
    corner = Point::create();
    return Rectangle(H, L, corner);
}

Rectangle::Rectangle(int hauteur, int largeur, Point topCorner) {
    this->hauteur = hauteur;
    this->largeur = largeur;
    this->topCorner = topCorner;
}

Rectangle::Rectangle() {
    this->hauteur = 1;
    this->largeur = 1;
}


void Rectangle::draw() {

}

int Rectangle::getHauteur() {return this->hauteur;}
int Rectangle::getLargeur() {return this->largeur;}
Point Rectangle::getCorner() {return this->topCorner;}


