#include <stdio.h>
#include <stdlib.h>
typedef struct list_chainee cell;
struct list_chainee
{
    int val;
    cell *next;
};
int main()
{
    int i=0,n;
    cell *T,*nouveau,*encheneur;
    T=malloc(sizeof(cell));
    encheneur=malloc(sizeof(cell));
    T->next=NULL;
    encheneur->next=NULL;
    printf("entrer une valeure:");
    scanf("%d",&n);
    T->val=n;
    encheneur=T;
    for(i=0;i<=4;i++)
    {
        printf("entrer une valeure:");
        scanf("%d",&n);
        nouveau=malloc(sizeof(cell));
        nouveau->val=n;
        encheneur->next=nouveau;
        encheneur=nouveau;
        nouveau->next=NULL;
    }
    encheneur=T;
    while(encheneur!=NULL)
    {
        if(T->val==0)
        {
            T=T->next;
            free(encheneur);
            encheneur=T;
        }
        else
        {
            nouveau=encheneur;
            encheneur=encheneur->next;
            if(encheneur!=NULL&&encheneur->val==0)
            {
               nouveau->next=encheneur->next;
               encheneur=nouveau;
            }

        }
    }
    for(encheneur=T;encheneur!=NULL;encheneur=encheneur->next)
    {
       printf("%d\n",encheneur->val);
    }

    return 0;
}
