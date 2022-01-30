#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v;
    FILE *br=NULL;
    br=fopen("C:\\Users\\bahri\\Documents\\khalid.txt","r++");
    char name[150];
    if(br!=NULL)
    {
        while (!feof(br))
    {
       fgets(name,150,br);
       puts(name);


    } fclose(br);
    }else
    {
        printf("impossible d'ouvrire le fichier! ");
    }
    v=rename("Documents\\khalid.txt","khoo.txt");
    printf("\n\n v=%d",v);
    return 0;
}
