#include <iostream>
#include <math.h>

#include <stdio.h>



/*void rectangle(){

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
}*/

int ** sheet (int x, int y, int z=0){
    int **tableau2D;
    tableau2D = new int*[x];
    for ( int i = 0 ; i < x ; i++ ){
        tableau2D[i] = new int[y];
    }
    for ( int i = 0 ; i < x ; i++ ){
        for ( int j = 0 ; j < y; j++ ){
            tableau2D[i][j] = z;
        }
    }
    return tableau2D;

    int main()
{
    int formeNumber;
    std::cout<<"Veuillez entrer le numero de la forme géométrique que vous voulez dessiner"<<std::endl;
    std::cout<<"Rectangle: 1 \n Cercle: 2 \n Segment: 3 \n Polygone: 4"<<std::endl;
    std::cin >> formeNumber;
    switch (formeNumber) {
        case 1:
            Rectangle rectangle;
            break;
        case 2:
            Circle circle;
            break;
        case 3:
            Segment segment;
            break;
        case 4:
            Polygone polygone;
            break;
    }
    //rectangle();
    //cercle(5);
    return 0;
}

