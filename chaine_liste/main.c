#include <stdio.h>
#include <stdlib.h>
#include"chaine_liste.h"

int main()
{
    head *L=NULL;
    L=malloc(sizeof(head));
    creat_vl(L);
    test_vl(L);
    chaine *C=NULL;
    C=malloc(sizeof(chaine));
    C->age=11;
    C->weight=21.5;
    chaine *G=NULL;
    G=malloc(sizeof(chaine));
    G->age=33;
    G->weight=33.5;
    add2head(L,14,54.23);
    add2head(L,14,5.23);
    add2head(L,10,5.23);
    add2head(L,1,5.23);
    add_bef_gp(L,find_adress(L,14),G);
    add2head(L,24,5.23);
    add2giv_pos(L,find_adress(L,1),C);
    add2head(L,4,5.23);
    add2end_G(L,C);
    printf("la taille de la list = %d\n",L->taille);
    aff_chaine(L);

    return 0;
}
