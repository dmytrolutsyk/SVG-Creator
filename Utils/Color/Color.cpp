//
// Created by VIDAL Léo on 06/02/2021.
//

#include <iostream>
#include "Color.h"

// Passage par methode statique car le constructeur par défaut
// d'un objet est automatiquement appeler lorsque celui ci est le membre d'une classe
Color Color::create() {
    bool isConformSaisie;
    do {
        isConformSaisie = false;
        int selection = 0;
        std::cout << "Voici la liste des couleurs possible veuillez en selectionner une : \n";
        std::cout << "1 - Rouge\n";
        std::cout << "2 - Violet\n";
        std::cout << "3 - Vert\n";
        std::cout << "4 - Bleu\n";
        std::cout << "5 - Noir \n";
        std::cin >> selection;
        if(selection < 0 || selection > 5) {std::cout << "Veuillez saisir une couleur proposé";}
        else {
            isConformSaisie = true;
            switch (selection) {
                case 1: return Color(187,11,11);
                case 2: return Color(66,28,82);
                case 3: return Color(102,153,102);
                case 4: return Color(58,142,186);
                case 5: return Color(0,0,0);
                default: break;
            }
        }
    }while(!isConformSaisie);
}

int Color::getRed() {
    return this->red;
}

int Color::getBlue() {
    return this->blue;
}

int Color::getGreen() {
    return this->green;
}

Color::Color(int red, int green, int blue) {
    this->red = red;
    this->green = green;
    this->blue = blue;
}

Color::Color() {
    this->red = 0;
    this->green = 0;
    this->blue = 0;
}
