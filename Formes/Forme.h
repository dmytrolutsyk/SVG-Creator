//
// Created by Dima on 23/01/2021.
//

#ifndef SVG_CREATOR_FORME_H
#define SVG_CREATOR_FORME_H


#include "../Utils/Color/Color.h"
#include <fstream>


class Forme {
public:
    // Abstract function
    virtual void draw(std::string fileName) = 0;
private:
    Color color;
};


#endif //SVG_CREATOR_FORME_H
