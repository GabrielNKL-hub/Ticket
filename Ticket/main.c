#include <stdio.h>
#include <stdlib.h>

float somme (float pris, float prib, int priac, float prid);

float somme (float pris, float prib, int priac, float prid){
    float res;
    res = pris + prib + priac + prid;

    return res;

    }


int main()
{
    float res, prixs, prixb, prixd;
    int prixac;

    int c1;
    printf("Choisissez votre sandwich\n 1 = Hamburger : 2.35 euros \n 2 = Cheeseburger : 3.75 euros\n 3 = Filet o Fish : 4.45 euros\n 4 = Big Mac : 8.80 euros\n");
    scanf("%d", &c1);
    if (c1==1){
        printf("Hamburger\n\n");
        prixs=2.35;
    }
    if (c1==2){
        printf("Chesseburger\n\n");
         prixs=3.75;
    }
    if (c1==3){
        printf("Filet o Fish\n\n");
         prixs=4.45;
    }
    if (c1==4){
        printf("Big Mac\n\n");
         prixs=8.80;
    }

    int c2;
    printf ("Choisissez votre boisson\n 5 = Coca-cola : 1.25 euros \n 6 = Sprite : 1.25 euros\n 7 = Fanta : 1.25 euros\n");
    scanf ("%d", &c2);
    if (c2==5){
        printf("Coca-cola\n\n");
        prixb=1.25;
    }
    if (c2==6){
        printf("Sprite\n\n");
        prixb=1.25;
    }
    if (c2==7){
        printf("Fanta\n\n");
        prixb=1.25;
    }

    int c3;
    printf ("Choisissez votre accompagnement\n 8 = Frite : 2 euros \n 9 = Potatoes = 2 euros\n");
    scanf ("%d", &c3);
    if (c3==8){
        printf("Frite\n\n");
        prixac=2;

    }
    if (c3==9){
        printf("Potatoes\n\n");
        prixac=2;
    }
    int c4;
    printf ("Choisissez votre dessert\n 10 = Cornet de dessert glace : 1.20 euros \n 11 = Brownie : 2.40 euros\n 12 = Cookie : 2.00 euros\n 13 = Muffin chocolat : 2.25 euros\n");
    scanf ("%d", &c4);
    if (c4==10){
        printf("Cornet de dessert glace\n\n");
        prixd=1.20;
    }
    if (c4==11){
        printf("Brownie\n\n");
        prixd=2.40;
    }
    if (c4==12){
        printf("Cookie\n\n");
        prixd=2.00;
    }
    if (c4==13){
        printf("Muffin chocolat\n\n");
        prixd=2.25;
    }

    res = somme(prixs, prixb, prixac, prixd);

    printf ("Votre total est de : %f euros\n", res);






    return 0;
}

