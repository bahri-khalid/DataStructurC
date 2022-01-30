#include <stdio.h>
#include <stdlib.h>
typedef struct chaine_triee cell;
struct chaine_triee
{
    int value;
    cell *suivant;
};
int main()
{
    cell *origine;
    cell *nouveau;
    cell *encheneur;
    origine=malloc(sizeof(cell));
    origine->suivant=NULL;
    encheneur=malloc(sizeof(cell));
    int i=1,n,c=1;
    printf("entrer une valeure: ");
    scanf("%d",&n);
    origine->value=n;
    encheneur=origine;
    while(i!=0)
    {
        c++;
        printf("entrer une valeure: ");
        scanf("%d",&n);
        nouveau=malloc(sizeof(cell));
        nouveau->value=n;
        nouveau->suivant=NULL;
        encheneur->suivant=nouveau;
        encheneur=nouveau;
        printf("taper 1 pour ajouter ou 0 pour quiter: ");
        scanf("%d",&i);
    }
    encheneur=origine;
    for(i=0;i<c;i++)
    {
        if(origine->value<origine->suivant->value)
        {
            nouveau=origine->suivant;
            origine->suivant=origine->suivant->suivant;
            nouveau->suivant=origine;
            free(origine);
            origine=nouveau;
            free(nouveau);
        }

        nouveau=origine;
        encheneur=nouveau->suivant->suivant;
        while(encheneur!=NULL)
        {
            if(nouveau->suivant->value<encheneur->value)
            {
                nouveau->suivant->suivant=encheneur->suivant;
                encheneur->suivant=nouveau->suivant;
                nouveau->suivant=encheneur;
            }
            nouveau=nouveau->suivant;
            encheneur=nouveau->suivant->suivant;
        }
    }
    encheneur=origine;
    while(encheneur!=NULL)
    {
        printf("n= %d\n",encheneur->value);
        encheneur=encheneur->suivant;
    }
    return 0;
}
