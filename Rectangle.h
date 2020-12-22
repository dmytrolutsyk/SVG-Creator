//
// Created by Dima on 20/12/2020.
//

#ifndef SVG_CREATOR_RECTANGLE_H
#define SVG_CREATOR_RECTANGLE_H


class Rectangle(int hauteur, int largeur){
    public:
        Rectangle();
        Rectangle(int hauteur, int largeur);
        void get(int hauteur);
        void get (int largeur);
        int set(int hauteur);
        int set(int largeur);

    private:
        int hauteur;
        int largeur;
};


#endif //SVG_CREATOR_RECTANGLE_H