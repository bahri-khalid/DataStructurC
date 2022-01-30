#include <stdio.h>
#include <stdlib.h>
#include"poly_funs.h"
#include<math.h>
int main()
{
    monom *P=NULL;
    int d,choix=0;
    float c;
    do
    {
        printf("entrer le coef puis le puissance:\n");
        scanf("%f %d",&c,&d);
        P=insert_monom(P,d,c);
        printf("taper 1 pour ajouter un monom sinon taper 0: ");
        scanf("%d",&choix);

    }while(choix!=1);
    float x;
    printf("p(x)= ");
    affiche_poly(P);
    printf("\nentrer la valeure de x: ");
    scanf("%f",&x);
    printf("p(%.1f)= %f",x,calcl_p_x(P,x));
    printf("\np'(x)= ");
    affiche_poly(derv_poly(P));
    printf("\nenter le degre de monom a supp: ");
    scanf("%d",&d);
    printf("Q(x)= ");
    affiche_poly(supp_monom(P,d));

    return 0;
}
