//
// Created by VIDAL Léo on 28/01/2021.
//

#ifndef SVG_CREATOR_DRAW_H
#define SVG_CREATOR_DRAW_H

#include <vector>
#include "../Utils/Point/Point.h"
#include "../Formes/Forme.h"
#include "../Formes/Rectangle/Rectangle.h"
#include "../Formes/Circle/Circle.h"
#include "../Formes/Line/Line.h"
#include "../Formes/Polygone/Polygone.h"

class Draw {

public:
    Draw(int largeur, int hauteur);
    void createForme();

    int getHauteur();
    int getLargeur();
    int getListFormeLength();

private:
    int largeur;
    int hauteur;
    std::vector<Forme*> formes;

    void addForme(Forme* forme);
    void createRectangle();
    void createCircle();
    void createLine();
    void createPolygone();

    int cancerOrRetry();

    bool pointIsConform(Point point);
    bool rectangleIsconform(Rectangle rectangle);
    bool circleIsconform(Circle circle);
    bool lineIsconform(Line line);
    bool polygoneIsconform(Polygone polygone);



};


#endif //SVG_CREATOR_DRAW_H
