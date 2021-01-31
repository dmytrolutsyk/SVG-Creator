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

void Draw::addForme(Forme* forme) {
    this->formes.push_back(forme);
}

void Draw::createForme() {
    this->createRectangle();
}

void Draw::createRectangle() {
    Rectangle rectangle;
    bool isConform = false;
    do {
        rectangle = Rectangle::create();
        isConform = this->rectangleIsconform(rectangle);
        // TODO Si pas conforme proposer d'abandonner ou de recommencer
        /*if(!isConform) {

        }*/
    }while(isConform);
    this->addForme(&rectangle);
}



void Draw::createLine() {
    Line line;
    bool isConform = false;
    do {
        line = Line::create();
        isConform = this->lineIsconform(line);
        // TODO Si pas conforme proposer d'abandonner ou de recommencer
        /*if(!isConform) {

        }*/
    }while(isConform);
    this->addForme(&line);
}

bool Draw::lineIsconform(Line line) {
    if(!this->pointIsConform(line.getA())) return false;
    else if(!this->pointIsConform(line.getB())) return false;
    else return true;
}

bool Draw::pointIsConform(Point point) {
    if(this->largeur > point.getY() || point.getY() < 0) return false;
    else if(this->hauteur > point.getX() || point.getX() < 0) return false;
    else return true;
}

bool Draw::rectangleIsconform(Rectangle rectangle) {
    if(!this->pointIsConform(rectangle.getCorner())) return false;
    else return true;
}


