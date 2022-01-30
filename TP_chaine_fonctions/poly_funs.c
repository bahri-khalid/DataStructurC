#include"poly_funs.h"
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/****************************************************************/
monom *insert_monom(monom *L,int d,float c)
{
        int choix;
        monom *encheneur=NULL;
        encheneur=malloc(sizeof(monom));
        encheneur->next=NULL;
        encheneur->c=c;
        encheneur->d=d;
        if(L==NULL)
        {
            L=encheneur;
        }else
        {
            for(encheneur=L;encheneur!=NULL;encheneur=encheneur->next)
        {
            if(encheneur->d==d)
            {
                printf("cette monome exist deja, voulez-vous le remplacer? 1/0:");
                scanf("%d",&choix);
                if(choix==1)
                {
                    encheneur->d=d;
                    encheneur->c=c;
                }
            }
        }

        L=ins_in_ord(L,d,c);
        }
        return L;

}
/**************************************************************/
monom *ins_in_ord(monom *L,int d,float c)
{
    monom *encheneur=NULL;
    encheneur=malloc(sizeof(monom));
    monom *nov=NULL;
    nov=malloc(sizeof(monom));
    nov->c=c;
    nov->d=d;
    nov->next=NULL;
    if(nov->d<L->d)
    {
        nov->next=L;
        L=nov;

    }else
    {
        for(encheneur=L;encheneur!=NULL;encheneur=encheneur->next)
        {
            if(encheneur->d<nov->d&&encheneur->next==NULL)
                {
                    encheneur->next=nov;

                }else if(encheneur->d<nov->d&&encheneur->next->d>nov->d)
                {
                    nov->next=encheneur->next;
                    encheneur->next=nov;
                }
        }
    }
    return L;
}
/***************************************************************/
void affiche_poly(monom *L)
{
    monom *encheneur=NULL;
    if(L!=NULL)
    {
        for(encheneur=L;encheneur!=NULL;encheneur=encheneur->next)
        {
            printf("%.1f.X^%d",encheneur->c,encheneur->d);
            if(encheneur->next!=NULL&&encheneur->next->c>0)
                printf("+");
        }
    }else
    {
        printf("0");
    }

}
/**********************************************************************/
monom *derv_poly(monom *L)
{
   monom *encheneur=NULL;
   monom *nouv=NULL;
   monom *nouv1=NULL;
   monom *D=NULL;
   D=malloc(sizeof(monom));
   D->c=(L->c)*(L->d);
   D->d=(L->d)-1;
   D->next=NULL;
   nouv=D;
   for(encheneur=L->next;encheneur!=NULL;encheneur=encheneur->next)
   {
       nouv1=malloc(sizeof(monom));
       nouv1->c=(encheneur->c)*(encheneur->d);
       nouv1->d=(encheneur->d)-1;
       nouv1->next=NULL;
       nouv->next=nouv1;
       nouv=nouv1;
    }
    if(D->c==0)
       {
           D=D->next;
       }
    return D;
}
/**************************************************************************/
float calcl_p_x(monom *L,float x)
{
    float p=0;;
    monom *encheneur=NULL;
    for(encheneur=L;encheneur!=NULL;encheneur=encheneur->next)
    {
        p+=encheneur->c*pow(x,encheneur->d);
    }
    return p;
}
/********************************************************************************/
monom *supp_monom(monom *L,int d)
{
    monom *encheneur1=NULL;
    monom *encheneur2=NULL;
    if(L->d==d&&L->next!=NULL)
    {
        L=L->next;
    }else if(L->d==d&&L->next==NULL)
    {
        return NULL;
        exit(1);
    }
    for(encheneur2=L,encheneur1=L->next;encheneur1!=NULL;encheneur2=encheneur2->next,encheneur1=encheneur1->next)
    {
        if(encheneur1->d==d)
        {
           encheneur2->next=encheneur1->next;
        }
        if(encheneur2->d==d)
            encheneur2=NULL;
    }
        return L;
}
