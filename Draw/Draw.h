//
// Created by VIDAL Léo on 28/01/2021.
//

#ifndef SVG_CREATOR_DRAW_H
#define SVG_CREATOR_DRAW_H

#include "../Formes/Point/Point.h"

class Draw {

public:
    Draw(int largeur, int hauteur);
    bool isInDraw(Point point);

    int getHauteur();
    int getLargeur();

private:
    int largeur;
    int hauteur;

};


#endif //SVG_CREATOR_DRAW_H
