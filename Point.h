//
// Created by Dima on 28/12/2020.
//

#ifndef SVG_CREATOR_POINT_H
#define SVG_CREATOR_POINT_H


class Point{
public:
    //Constructor
    Point();
    Point(float m_x, float m_y);

    //getter et setter
    void setX(float &x);
    void setY(float &y);
    void add(Point Point);
    float getX();
    float getY();

private:
    float m_x, m_y;
};

#endif //SVG_CREATOR_POINT_H
