//
// Created by VIDAL Léo on 06/02/2021.
//

#ifndef SVG_CREATOR_COLOR_H
#define SVG_CREATOR_COLOR_H


class Color {
private:
    int red;
    int green;
    int blue;

public:
    static Color create();
    Color(int red, int green, int blue);
    Color();
    int getRed();
    int getBlue();
    int getGreen();
};


#endif //SVG_CREATOR_COLOR_H
