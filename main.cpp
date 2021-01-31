#include <iostream>
#include <math.h>

#include <stdio.h>
#include "Formes/Polygone/Polygone.h"
#include "Draw/Draw.h"


Draw createDraw() {
    int hauteur;
    int largeur;
    bool validData = false;

    do {
        std::cout << "Veuiller choisir la hauteur de votre dessin : \n";
        std::cin >> hauteur;
        std::cout << "Veuiller choisir la largeur de votre dessin : ";
        std::cin >> largeur;
        if(hauteur <= 0 || largeur <= 0) std::cout << "Veuillez saisir une taille supérieur à 0\n";
        else validData = true;
    }while(!validData);

    return Draw(largeur, hauteur);
}

int main() {
    std::cout << "Bienvenue dans le SVG Creator !\n";
    std::cout << "Pour commencer veuillez créer votre dessin :\n";
    Draw draw = createDraw();
    draw.createForme();

    return 0;
}










