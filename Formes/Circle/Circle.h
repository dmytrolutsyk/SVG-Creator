//
// Created by VIDAL Léo on 28/01/2021.
//

#ifndef SVG_CREATOR_CIRCLE_H
#define SVG_CREATOR_CIRCLE_H


#include "../../Utils/Point/Point.h"
#include "../../Utils/Color/Color.h"

class Circle {
private:
    float m_radius;
    Point m_center;
    Color color;

public:
    Circle(int centerX, int centerY, float radius);

    Point getCenter();
    void setCenter(Point newCenter);
    float getRadius();
    void setRadius(float value);
};


#endif //SVG_CREATOR_CIRCLE_H
