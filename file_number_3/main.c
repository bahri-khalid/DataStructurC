#include <stdio.h>
#include <stdlib.h>
#include"file3.h"

int main()
{
    FILE *fileP=NULL;
    fileP=fopen("file3","r");
    if (fileP!=NULL)
    {
        int i;
        struct stctab tableau[4];


      for (i=0;i<4;i++)
      {
         fscanf(fileP,"%s %s %d %d",tableau[i].cNom,tableau[i].cArticle,&tableau[i].iNombre,&tableau[i].iPrix);
      }
      for (i=0;i<4;i++)
      {
                 printf("%s %s %d %d\n",tableau[i].cNom,tableau[i].cArticle,tableau[i].iNombre,tableau[i].iPrix);

      }
    }else
    {
        printf("there has been an error!!");
    }
    fclose(fileP);
    return 0;
}
