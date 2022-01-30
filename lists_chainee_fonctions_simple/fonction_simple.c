#include <stdio.h>
#include <stdlib.h>
#include"fonctons_simple.h";

void creatvl(liste *L)
{
    L->taille=0;
    L->tete=NULL;
}
void afficher(liste *L)
{
    chaine *p=NULL;
    for(p=L->tete;p!=NULL;p=p->next)
    {
        printf("x=%.2f\n",p->num);
    }
}
void add2head(liste *L,float x)
{
    chaine *nouv=NULL;
    nouv=(liste *)malloc(sizeof(chaine));
    nouv->num=x;
    nouv->next=NULL;
    add2head_G(L,nouv);

}

void add2end(liste *L,float x)
{
    chaine *nouv=NULL;
    nouv=(liste *)malloc(sizeof(chaine));
    nouv->num=x;
    nouv->next=NULL;
    add2end_G(L,nouv);

}



void add2head_G(liste *L,chaine *C)
{
    if(L->tete==NULL)
    {
        L->tete=C;
    }else
    {
        C->next=L->tete;
        L->tete=C;
    }

}

void add2end_G(liste *L,chaine *C)
{
    if(L->tete==NULL)
    {
        L->tete=C;
    }else
    {
        chaine *p=NULL;
        for(p=L->tete;p->next!=NULL;p=p->next);
        p->next=C;
    }

}

int Is_empty(liste *L)
{
    if(L->tete==NULL)
        return 1;
    else
        return 0;
}
