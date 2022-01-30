#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
head *init_chaine(void)
{
    head *tete=NULL;
    tete=(head *)malloc(sizeof(head));
    tete->taille=0;
    tete->tete=NULL;
    return tete;
}

void Empiler(head *T,int val)
{
    chaine *nouv=NULL;
    nouv=(chaine *)malloc(sizeof(chaine));
    nouv->value=val;
    nouv->next= T->tete;
    T->tete=nouv;
    T->taille++;
}

void Emfiler(head *T,int val)
{
    chaine *nouv=NULL;
    nouv=(chaine *)malloc(sizeof(chaine));
    nouv->value=val;
    nouv->next=NULL;
    if(T->tete==NULL)
    {
        T->tete=nouv;
    }
    else
    {
        chaine *p;
        for(p=T->tete;p->next!=NULL;p=p->next);
        p->next=nouv;
        T->taille++;
    }
}


void insrt_gp(head *T,int index,int value)
{
    if(T!=NULL && index>0)
    {
    chaine *nouv=NULL;
    nouv=malloc(sizeof(chaine));
    nouv->value=value;
    nouv->next=NULL;
    if(T->taille<index)
    {
        Emfiler(T,value);
    }else
    {
        chaine *p;
        int i;
        for(p=T->tete,i=1;p!=NULL,i<index-1;p=p->next,i++);
        nouv->next=p->next;
        p->next=nouv;
    }
    }

}


void replace_gp(head *T,int index,int value)
{
    if(T!=NULL && index>0)
    {
    chaine *nouv=NULL;
    nouv=malloc(sizeof(chaine));
    nouv->value=value;
    nouv->next=NULL;
    if(T->taille<index)
    {
        Emfiler(T,value);
        T->taille++;
    }else
    {
        chaine *p;
        int i;
        for(p=T->tete,i=1;p!=NULL,i<index-1;p=p->next,i++);
        nouv->next=p->next->next;
        p->next=nouv;
        T->taille++;
    }
    }

}

void printls(head *T)
{
    if(T!=NULL)
    {
        chaine *p=NULL;
        for(p=T->tete;p!=NULL;p=p->next)
        {
            printf("[%d] ",p->value);
        }
        if(T->taille==0)
        {
            printf("this list is empty!!\n");
        }
    }else
    {
        printf("this list is not yet set!\n");
    }
    printf("\n");

}

void suppelement(head *T, int value)
{
      if(T!=NULL && T->tete!=NULL)
{
    chaine *p1=NULL;
    chaine *p2=NULL;
    for(p1=T->tete->next,p2=T->tete;p1!=NULL;p1=p1->next,p2=p2->next)
    {
        if(p1->value==value)
        {
            p2->next=p1->next;
            p1=p1->next;
        }
    }
    if(T->tete->value==value)
    {
        T->tete=T->tete->next;
    }
}

}
void sorte(head *T)
{
    head *H=NULL;
    H=init_chaine();
    chaine *p=NULL;
    chaine *q=NULL;
    int min0=-9999999;
    int min1;
    int i;
    for(i=0;i<T->taille-1;i++)
    {
        min1=9999999;
        for(p=T->tete;p!=NULL;p=p->next)
        {
            if(p->value>min0 && p->value<=min1)
            {
                q=p;
                min1=q->value;
            }
        }
        min0=q->value;
        Emfiler(H,min0);

    }
    T->tete=H->tete;

}

polynome * mkpoly(void)
{
        polynome *O=NULL;
        O=(polynome *)malloc(sizeof(polynome));
        O->degmax=0;
        O->Queue=NULL;
        return O;
}

void insert_order(polynome *P,int deg, float coif)
{
        monome *m=NULL;
        m=(monome *)malloc(sizeof(monome));
        m->cft=coif;
        m->deg=deg;
    if(P->Queue==NULL)
    {
        P->Queue=m;

    }else
    {
        monome *mn;
        monome *n;
        if(deg>P->Queue->deg)
        {
            m->next=P->Queue;
            P->Queue=m;
        }
        for(mn=P->Queue,n=P->Queue->next;mn!=NULL;mn=mn->next)
        {
            if(deg>n->deg)
            {
                m->next=n;
                mn->next=m;

            }else if(mn->deg==deg)
            {
                printf("valeure deja exist\n");
            }
        }
        if(mn->deg>deg)
        {
            mn->next=m;
        }else if(mn->deg==deg)
        {
            printf("valeure deja exist\n");
        }
    }
}

void affpoly(polynome *P)
{
    monome *m;
    for(m=P->Queue;m->next!=NULL;m=m->next)
    {
        printf("%.2fX^%d ",m->cft,m->deg);
        printf("+");
    }
}



