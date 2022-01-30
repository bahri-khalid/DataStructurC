#include <stdio.h>
#include <stdlib.h>
#include "Arbre_1.h"
#include <math.h>

int main()
{
    arbre * AR=NULL;
    int value;
    do
    {
        printf("enter a value(0 to exit): ");
        scanf("%d",&value);
        if(value!=0)
            AR=buildtree(AR,value);

    }while(value!=0);
    printtree(AR);
    printf("le prefondeur est: %d \n",profendeur(AR));
    printf("la somme des noeuds est: %d\n",sumtree(AR));
    if(is_in_tree(AR,8))
        printf("la valeur est dans l'arbre.\n");
    else
        printf("la valeur n'est pas dans larbre.\n");
    return 0;
}

/********************************************************/
arbre * buildtree(arbre * AR,int value)
{
    if (AR==NULL)
    {
        AR=(arbre *)malloc(sizeof(arbre));
        AR->FD=NULL;
        AR->FG=NULL;
        AR->value=value;
    }else
    {
        if(AR->value<value)
        {
            AR->FD=buildtree(AR->FD,value);
        }
        else if(AR->value>value)
        {
            AR->FG=buildtree(AR->FG,value);
        }
        else
        {
            printf("An aAlready exiting value \a\n");
        }
    }
    return AR;
}
/******************************************************/
void printtree(arbre *tr)
{
    if(tr!=NULL)
    {
            printtree(tr->FG);
            printf("value is:%d \n",tr->value);
            printtree(tr->FD);


    }
}
/*******************************************************/
int profendeur(arbre * ar)
{
    if(ar==NULL)
    {
        return 1;
    }else if((ar->FD==NULL) && (ar->FG==NULL))
    {
        return 0;
    }
    else
    {
        return 1+maxi(profendeur(ar->FD),profendeur(ar->FG));

    }
}
/**************************************************************/

int maxi(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
/****************************************************************/
int sumtree(arbre *ar)
{
    if (ar==NULL)
        return 0;
    else
        return ar->value+sumtree(ar->FD)+sumtree(ar->FG);
}
/*******************************************************************/
int is_in_tree(arbre *ar,int value)
{
    if(ar!=NULL)
    {
        if(ar->value==value)
        {
            return 1;
        }
        else
        {
            return maxi(0,maxi(is_in_tree(ar->FD,value),is_in_tree(ar->FG,value))) ;
        }
    }

}


