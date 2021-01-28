//
// Created by VIDAL Léo on 28/01/2021.
//

#include <iostream>
#include "Draw.h"

Draw::Draw(int largeur, int hauteur) {
    this->hauteur = hauteur;
    this->largeur = largeur;
}

int Draw::getHauteur() { return this->hauteur; }
int Draw::getLargeur() { return this->largeur; }

bool Draw::isInDraw(Point point) {
    return point.getX() < this->largeur && point.getY() < this->hauteur;
}


