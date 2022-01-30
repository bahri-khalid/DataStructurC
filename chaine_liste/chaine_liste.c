#include <stdio.h>
#include <stdlib.h>
#include"chaine_liste.h"
void creat_vl(head *A)
{
    A->taille=0;
    A->node=NULL;
}

//1/*****************************************
void test_vl(head *A)
{
    if(A->node==NULL&&A->taille==0)
    {
        printf("la liste est bien vide\n");
    }else
    {
        char a;
        printf("la liste n'est pas vide\n");
        printf("voulez-vous exite: y/n : ");
        scanf("%c",&a);
        if(a=='y')
            exit(1);

    }
}
//2/*****************************************
void add2head(head *A,int age,float weight)
{
    chaine *C=NULL;
    C=malloc(sizeof(chaine));
    C->age=age;
    C->weight=weight;
    C->next=NULL;
    add2head_G(A,C);
}
//3/*****************************************
void add2head_G(head *A,chaine *C)
{
    A->taille++;
    if(A->node==NULL)
    {
        A->node=C;
    }else
    {
        C->next=A->node;
        A->node=C;
    }
}
//4/*****************************************
void aff_chaine(head *A)
{
    chaine *compt=NULL;
    for(compt=A->node;compt!=NULL;compt=compt->next)
    {
        printf("age= %d\t weight= %f\n",compt->age,compt->weight);
    }
}
//5/*****************************************
void add2end(head *A,int age,float weight)
{
    chaine *C=NULL;
    C=malloc(sizeof(chaine));
    C->age=age;
    C->weight=weight;
    add2end_G(A,C);
}
//6/*****************************************
void add2end_G(head *A,chaine *C)
{
    A->taille++;
    chaine *compt=NULL;
    if(A->node==NULL)
    {
        A->node=C;
        C->next=NULL;
    }else
    {
        for(compt=A->node;compt->next!=NULL;compt=compt->next);
        compt->next=C;
        C->next=NULL;
    }


}
//7/*****************************************
chaine *find_adress(head *A,int age)
{
    chaine *e=NULL;
    for(e=A->node;e!=NULL;e=e->next)
    {
        if(e->age==age)
        {
            return e;
            break;
        }
    }
    return NULL;
}
//8/*****************************************
void add2giv_pos(head *A,chaine *e,chaine *_C)
{
    chaine *x=NULL;
    chaine *C=NULL;
    C=malloc(sizeof(chaine));
    C->age=_C->age;
    C->weight=_C->weight;
    if(e==NULL)
    {
        printf("pas d'ellements\n");
    }else
    {
        if(A->node==e)
    {
        C->next=A->node;
        A->node=C;
        A->taille++;
    }else
    {
       for(x=A->node;x->next!=e;x=x->next);
       C->next=e;
       x->next=C;
       A->taille++;
    }
    }

}
//9/*******************************************
void add_bef_gp(head *A,chaine *e,chaine *_C)
{
    chaine *x=NULL;
    chaine *y=NULL;
    chaine *C=NULL;
    C=malloc(sizeof(chaine));
    C->age=_C->age;
    C->weight=_C->weight;
    if(e==NULL)
    {
        printf("pas d'ellement\n");
    }else
    {
        if(A->node==e)
        {
            printf("opperation impossible!\n");
        }else
        {
           for(x=A->node;x->next!=e;x=x->next);
           y=x;
           for(x=A->node;x->next!=y;x=x->next);
           C->next=y;
           x->next=C;
           A->taille++;
        }
    }

}
