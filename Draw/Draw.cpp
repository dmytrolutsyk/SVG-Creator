//
// Created by VIDAL Léo on 28/01/2021.
//

#include <iostream>
#include "Draw.h"
#include <string>
#include <typeinfo>
#include <limits>

const int rectangleIndex = 0;
const int lineIndex = 1;
const int circleIndex = 3;
const int polygoneIndex = 2;

Draw::Draw(int largeur, int hauteur, std::string name) {
    this->hauteur = hauteur;
    this->largeur = largeur;
    this->name = name;

    std::vector<Rectangle *> rectangles;
    std::vector<Line *> lines;
    std::vector<Circle *> circles;
    std::vector<Polygone *> polygones;

    std::vector<std::vector<Forme*>> formes = {
            {rectangles.begin(), rectangles.end()},
            {lines.begin(),      lines.end()},
            {polygones.begin(),  polygones.end()},
            {circles.begin(),    circles.end()}
    };
    this->formes = formes;
}

int Draw::getHauteur() { return this->hauteur; }
int Draw::getLargeur() { return this->largeur; }



void Draw::addForme(Forme* forme, int index) {
    this->formes[index].push_back(forme);
}

void Draw::createForme() {
    int typeForme;
    do {
        std::cout << "Quel figure voulez vous créer ? \n";
        std::cout << "- Pour un segment taper 1\n";
        std::cout << "- Pour un rectangle taper 2\n";
        std::cout << "- Pour un polygone taper 3\n";
        std::cout << "- Pour un cercle taper 4\n";
        std::cin >> typeForme;
    }while(typeForme != 1 && typeForme != 2 && typeForme != 3 && typeForme != 4);
    switch(typeForme){
        case 1: this->createLine(); break;
        case 2: this->createRectangle(); break;
        case 3: this->createPolygone(); break;
        case 4: this->createCircle(); break;
        default: break;
    }
}

void Draw::createRectangle() {
    Rectangle rectangle;
    bool isConform;
    rectangle = Rectangle::create();
    isConform = this->rectangleIsconform(rectangle);
    if(isConform) {this->addForme(&rectangle, rectangleIndex);}
    else {
        int cancelOrRetry = this->cancelOrRetry();
        if(cancelOrRetry == 1) {this->createRectangle();}
    }
}

void Draw::createCircle() {
    Circle circle;
    bool isConform;
    circle = Circle::create();
    isConform = this->circleIsconform(circle);
    if(isConform) {this->addForme(&circle, circleIndex);}
    else {
        int cancelOrRetry = this->cancelOrRetry();
        if(cancelOrRetry == 1) {this->createCircle();}
    }
}



void Draw::createLine() {
    Line line;
    bool isConform;
    line = Line::create();
    isConform = this->lineIsconform(line);
    if(isConform) {
        this->addForme(&line, lineIndex);
    } else {
        int cancelOrRetry = this->cancelOrRetry();
        if(cancelOrRetry == 1) {this->createLine();}
    }
}

void Draw::createPolygone() {
    Polygone polygone;
    bool isConform;
    polygone = Polygone::create();
    isConform = this->polygoneIsconform(&polygone);
    if(isConform) {this->addForme(&polygone, polygoneIndex);}
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

bool Draw::polygoneIsconform(Polygone* polygone) {
    std::vector<Point>::iterator it,end;
    bool isConform = true;
    for(int i = 0; i<polygone->getListPoint().size(); i++){
        if(!this->pointIsConform(polygone->getListPoint()[i])) {isConform = false;}
    }
    return isConform;
}

bool Draw::circleIsconform(Circle circle) {
    bool isConform = true;
    if(!this->pointIsConform(circle.getCenter())) return false;
    else if (circle.getCenter().getY() + circle.getRadius() > this->hauteur) return false;
    else if (circle.getCenter().getX() + circle.getRadius() > this->largeur) return false;

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

std::string Draw::createSvg() {
    std::string fileName = this->name + ".svg";
    std::ofstream svgFile;
    svgFile.open(fileName, std::ios::app);
    if(svgFile.is_open()) {std::cout << "file open \n";}
    svgFile << "<svg ";
    svgFile << "width=\"" << this->getLargeur() << "\" ";
    svgFile << "height=\"" << this->getHauteur() << "\" >\n";
    svgFile.close();
    std::cout << "size of formes : " << this->formes.size() << "\n";
    std::cout << "size of line after : " << this->formes[lineIndex].size() << "\n";
    this->drawFormes(fileName);
    svgFile.open(fileName, std::ios::app);
    svgFile << "</svg>";
    return fileName;
}

void Draw::drawFormes(std::string fileName) {
    for(int i = 0; i < this->formes.size(); i++) {
        for(int j = 0; j < this->formes[i].size(); j++) {
            switch(i) {
                case lineIndex: {
                    this->drawLine(this->formes[lineIndex][j], fileName);
                    break;
                }
                case rectangleIndex: {
                    this->drawRectangle(this->formes[rectangleIndex][j], fileName);
                    break;
                }
                case circleIndex: {
                    this->drawCircle(this->formes[circleIndex][j], fileName);
                    break;
                }
                case polygoneIndex: {
                    this->drawPolygone(this->formes[polygoneIndex][j], fileName);
                    break;
                }
                default: break;
            }
        }
    }
}

void Draw::drawLine(Forme *forme, std::string fileName) {
    //forme->draw(fileName);
    //std::cout << "finish write line";
    Line* line = dynamic_cast<Line*>(forme);
    line->draw(fileName);
}

void Draw::drawRectangle(Forme *forme, std::string fileName) {
    Rectangle *rectangle = dynamic_cast<Rectangle*>(forme);
    rectangle->draw(fileName);
}

void Draw::drawPolygone(Forme *forme, std::string fileName) {
    Polygone *polygone = dynamic_cast<Polygone*>(forme);
    polygone->draw(fileName);
}

void Draw::drawCircle(Forme* forme, std::string fileName) {
    Circle *circle = dynamic_cast<Circle*>(forme);
    circle->draw(fileName);
}
