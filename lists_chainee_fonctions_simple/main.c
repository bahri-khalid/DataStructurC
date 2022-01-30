#include <stdio.h>
#include <stdlib.h>
#include"fonctons_simple.h";


int main()
{
    liste *T;
    T=malloc(sizeof(liste));
    creatvl(T);
    printf("taille=%d\n",T->taille);
    afficher(T);
    add2head(T,12.2);
    add2head(T,2);
    add2head(T,4);
    add2head(T,7);
    add2end(T,3);
    add2end(T,5);
    add2end(T,8);
    add2end(T,9);


    if(Is_empty(T))
        printf("this list is empty\n");
    else
        printf("this list is not empty\n");

    afficher(T);
    return 0;
}
