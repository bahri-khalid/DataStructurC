#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{

    head *H1=NULL;
    H1=init_chaine();
    int i;
    float e;
    /*for(i=0;i<6;i++)
    {
        int j;
        j=i*i;
        Emfiler(H1,j);
    }
    printls(H1);
    for(i=6;i<13;i++)
    {
        Empiler(H1,i);
    }
    insrt_gp(H1,9,2222);
    printls(H1);
    replace_gp(H1,4,2222);
    printls(H1);
    suppelement(H1,2222);
    printls(H1);*/
    polynome *Po=NULL;
    Po=mkpoly();
    for(i=1,e=4;i<8;e++,i++)
    {
        printf("sdkflj");
        insert_order(Po,i,e);
    }
    return 0;
}
