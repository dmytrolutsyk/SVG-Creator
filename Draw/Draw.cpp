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



void Draw::addForme(Forme* forme) {
    this->formes.push_back(forme);
}

void Draw::createForme() {
    int typeForme;
    do {
        std::cout << "Quel figure voulez vous créer ? \n";
        std::cout << "- Pour un segment taper 1\n";
        std::cout << "- Pour un rectangle taper 2\n";
        std::cout << "- Pour un polygone taper 3\n";
        std::cin >> typeForme;
    }while(typeForme != 1 && typeForme != 2 && typeForme != 3);
    switch(typeForme){
        case 1: this->createLine(); break;
        case 2: this->createRectangle(); break;
        case 3: this->createPolygone(); break;
        default: break;
    }
    std::cout << "Create forme teerrrrmiinnnaaadddoooo";
}

void Draw::createRectangle() {
    Rectangle rectangle;
    bool isConform;
    rectangle = Rectangle::create();
    isConform = this->rectangleIsconform(rectangle);
    if(isConform) {this->addForme(&rectangle);}
    else {
        int cancelOrRetry = this->cancelOrRetry();
        if(cancelOrRetry == 1) {this->createRectangle();}
    }
}



void Draw::createLine() {
    Line line;
    bool isConform;
    line = Line::create();
    isConform = this->lineIsconform(line);
    if(isConform) {
        std::cout << "Line is confoooooorrrrrrmmmmm // Adding line";
        this->addForme(&line);
    } else {
        int cancelOrRetry = this->cancelOrRetry();
        if(cancelOrRetry == 1) {this->createLine();}
    }
}

void Draw::createPolygone() {
    Polygone polygone;
    bool isConform;
    polygone = Polygone::create();
    isConform = this->polygoneIsconform(polygone);
    if(isConform) {this->addForme(&polygone);}
    else {
        int cancelOrRetry = this->cancelOrRetry();
        if(cancelOrRetry == 1) {this->createPolygone();}
    }
}

bool Draw::lineIsconform(Line line) {
    if(!this->pointIsConform(line.getA())) return false;
    else if(!this->pointIsConform(line.getB())) return false;
    else return true;
}

bool Draw::pointIsConform(Point point) {
    if(this->largeur < point.getY() || point.getY() < 0) return false;
    else if(this->hauteur < point.getX() || point.getX() < 0) return false;
    else return true;
}

bool Draw::rectangleIsconform(Rectangle rectangle) {
    if(!this->pointIsConform(rectangle.getCorner())) return false;
    else if(rectangle.getCorner().getX() + rectangle.getLargeur() > this->largeur) return false;
    else if(rectangle.getCorner().getY() + rectangle.getHauteur() > this->hauteur) return false;
    else return true;
}

bool Draw::polygoneIsconform(Polygone polygone) {
    std::vector<Point>::iterator it,end;
    bool isConform = true;
    for(it = polygone.getListPoint().begin(), end = polygone.getListPoint().end(); it!=end; ++it){
        if(!this->pointIsConform(*it.base())) {isConform = false;}
    }
    return isConform;
}

/*
 * Return 0 for cancel
 * Return 1 for retry
 */
int Draw::cancelOrRetry() {
    int returnCode;
    std::cout << "La figure que vous avez créer n'est pas positionnable sur le dessin :/ \n";
    do {
        std::cout << "Voulez vous recommencer : taper 1\n";
        std::cout << "Ou abandonner: taper 2 :";
        std::cin >> returnCode;
    }while(returnCode != 2 && returnCode != 1);
    return returnCode;
}

int Draw::getListFormeLength() {
    return this->formes.size();
}







