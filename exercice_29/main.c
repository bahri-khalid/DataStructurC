#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[80],name2[80];
    int num,price;
    FILE *fpointer=NULL;
    fpointer= fopen("C:\\Users\\bahri\\Documents\\listOfNeeds.txt","r");
    if(fpointer!=NULL)
    {
    for(num=0;num<4;num++)
    {
        //fscanf(fpointer,"%s",name2);
        //

        //printf("%s ",name1);
        printf("%s ",fgets(name1,80,fpointer));
    }
    }else{printf("there has been an error!");}
    fclose(fpointer);
    return 0;
}
