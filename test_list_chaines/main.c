#include <stdio.h>
#include <stdlib.h>
typedef struct list_chainee cell;
struct list_chainee
{
    int num;
    cell *next;
};
int main()
{
    int i=1;
    int n;
    cell *mayon,*dern,*nouv;
    mayon=malloc(sizeof(cell));
    dern=malloc(sizeof(cell));
    mayon->num=14;
    mayon->next=NULL;
    dern=mayon;
    for(;i!=9;i++)
    {
        printf("enter a number: ");
        scanf("%d",&n);
        nouv=malloc(sizeof(cell));
        nouv->num=n;
        nouv->next=NULL;
        dern->next=nouv;
        dern=nouv;
    }
    cell *aff,*behind;
    behind=malloc(sizeof(cell));
    aff=malloc(sizeof(cell));
    aff=mayon;
     //**comment insere une cellule***
    cell *nouv1;
    nouv1=malloc(sizeof(cell));
    nouv1->num=97;
    nouv1->next=NULL;

    nouv=mayon;
    for(i=0;i<2;i++)
    {
        nouv=nouv->next;
    }
    nouv1->next=nouv->next;
    nouv->next=nouv1;

    /***comment swicher deux elements**
    nouv=mayon;
    cell *nouv3,*nouv4;
    nouv4=malloc(sizeof(cell));
    nouv4->next=NULL;
    nouv3=malloc(sizeof(cell));
    nouv3->next=NULL;
    for(i=0;i<2;i++)
    {
        nouv=nouv->next;
    }

    nouv1=mayon;
    for(i=0;i<5;i++)
    {
        nouv1=nouv1->next;
    }
    nouv3=nouv->next;
    nouv4=nouv1->next->next;
    nouv1->next->next=nouv->next->next;
    nouv->next->next=nouv4;
    nouv->next=nouv1->next;
    nouv1->next=nouv3;
/****************************


    while(aff!=NULL)
    {
        if(mayon->num==0)
        {
            mayon=mayon->next;
            aff=mayon;
        }else
        {
          behind=aff;
          aff=aff->next;
          if(aff->num==0)
          {
              behind->next=aff->next;
              free(aff);
              aff=behind;

          }else
          {
              behind=aff;
              aff=aff->next;
          }
        }
    }*/

     for(aff=mayon;aff!=NULL;aff=aff->next)
    {
        printf("l'element %d \n",aff->num);

    }
    return 0;
}
