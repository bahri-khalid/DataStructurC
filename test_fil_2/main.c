#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *Fp=NULL;
    Fp=fopen("Test_2.txt","r");
    if (Fp!=NULL)
    {
      int i;
      char buffer[50];
      while(!feof(Fp))
      {
          fgets(buffer,50,Fp);
          printf("%s\n",buffer);
      }
    }else
    {printf("there has been an error");}
    fclose(Fp);
    return 0;
}
