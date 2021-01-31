//
// Created by Dima on 09/01/2021.
//

#ifndef SVG_CREATOR_POLYGONE_H
#define SVG_CREATOR_POLYGONE_H


#include <vector>
#include "../Point/Point.h"
#include "../Forme.h"

class Polygone : public Forme {
private:
    std::vector<Point> listPoint;

    void addPoint();

public:
    static Polygone create();
    Polygone();
    Polygone(std::vector<Point> listPoint);

    std::vector<Point> getListPoint();

    void draw();


};


#endif //SVG_CREATOR_POLYGONE_H
