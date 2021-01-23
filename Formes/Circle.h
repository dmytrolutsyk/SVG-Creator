//
// Created by Dima on 23/01/2021.
//

#ifndef SVG_CREATOR_CIRCLE_H
#define SVG_CREATOR_CIRCLE_H
#include "../Point.h"

class Circle{
public:
    //Constructeur
    Circle();
    Circle(float &x, float &y, float &radius);

    //getter et setter
    void setCenter(Point point);
    void setRadius(float &radius);
    Point getCenter();
    float getRadius();

    void add(Point point);

private:
    Point m_center;
    float m_radius;
};

#endif //SVG_CREATOR_CIRCLE_H
