//
// Created by VIDAL Léo on 28/01/2021.
//

#ifndef SVG_CREATOR_LINE_H
#define SVG_CREATOR_LINE_H


#include "../Point/Point.h"
#include "../Forme.h"

class Line : public Forme{

private:
    Point a;
    Point b;

public:
    static Line create();
    Line();
    Line(Point a, Point b);

    void draw();

    Point getA();
    Point getB();
};


#endif //SVG_CREATOR_LINE_H
