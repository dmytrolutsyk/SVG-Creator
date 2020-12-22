#include <iostream>
#include <math.h>

#include <stdio.h>

class Point(int x, int y){
    public:
        Point(x, y);
    private:
        int x;
        int y;
};


void rectangle(){
    int hauteur;
    int largeur;
    int increment=1;
    int increment2;
    while (increment==1)
    {
        std::cout<<"Entrez la hauteur du rectangle : "<<std::endl;
        scanf("%d",&hauteur);
        std::cout<<"Entrez la largeur du rectangle : "<<std::endl;
        scanf("%d",&largeur);
        for (increment=0 ; increment < hauteur ; increment++)
        {
            for (increment2=0 ; increment2 < largeur ; increment2++) printf("\xDB");
            printf("\n");
        }
        printf("\nFaites 1 pour recommencer et 2 pour quitter : ");
        scanf("%d",&increment);
        while ( (increment<1) || (increment>2) )
        {
            printf("ERREUR : veuillez entrer 1 ou 2 ! ");
            scanf("%d",&increment);
        }
    }
}

void cercle(int r) {

}
int main()
{
    //rectangle();
    cercle(5);
    return 0;
}

