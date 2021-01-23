//
// Created by Dima on 20/12/2020.
//

#include "Rectangle.h"

Rectangle::Rectangle(){

}

bool Rectangle::checkpoints(Point a, Point b, Point c, Point d)){
    if (a.m_x != b.m_x){
        return 1;
    }
    else if (a.m_y != c.m_y){
        return 1;
    }
    else if (b.m_y != d.m_y){
        return 1;
    }
    else if (c.m_x != d.m_x){
        return 1;
    }
}