//
// Created by Dima on 20/12/2020.
//

#ifndef SVG_CREATOR_RECTANGLE_H
#define SVG_CREATOR_RECTANGLE_H

#include "../Point/Point.h"
#include "../Forme.h"

class Rectangle : public Forme {
public:
    static Rectangle create();
    Rectangle();
    Rectangle(int hauteur, int largeur, Point topCorner);
    void draw();

    int getHauteur();
    int getLargeur();
    Point getCorner();
    // Why this dosn't work ?
    // bool isConform(Draw draw);

private:
        int hauteur;
        int largeur;
        Point topCorner;

};


#endif //SVG_CREATOR_RECTANGLE_H
