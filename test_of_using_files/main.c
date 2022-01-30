#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char friendInfo[30];
    FILE *Filepointer=NULL;
    Filepointer=fopen("friends_age.txt","r");
    if(Filepointer!=NULL)
    {
       /*for(i=0;i<5;i++)
       {
           printf("nom prenom age:  ");
           scanf("%s",&friendInfo);
           fputs(friendInfo,Filepointer);
           fputs("\n",Filepointer);
       }*/
    }else
    {printf("there has been an error!!");

    }
    while(!feof(Filepointer))
    {
         fgets(friendInfo,30,Filepointer);
    printf("%s ",friendInfo);
    }

    fclose(Filepointer);
    return 0;
}
