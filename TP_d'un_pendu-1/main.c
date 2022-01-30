#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include"functions.h"
int main()
{
    /*FILE*filepntr=NULL;
    filepntr=fopen("dictionaire.txt","w");
    if(filepntr==NULL)
    {
        printf("there has been an error!!");
    }
    else
    {
        int i;
        char buff[10];
        fprintf(filepntr,"5\n");
        for(i=0;i<5;i++)
        {
            printf("enter any word: ");
            scanf("%s",buff);
            fprintf(filepntr,"%s\n",buff);
        }
        fclose(filepntr);*/
        FILE *pntr=NULL;
        pntr=fopen("dictionaire.txt","r");
        if(pntr!=NULL)
        {
            int boolean=1;
          while(boolean)// ce loop pour passer d'un mot a un autre.
          {
            srand(time(NULL));
            int i=0,d=0,vie=10;// d pour tester si on a trouver le mot complet.
            int indTab[10],n=0;//ce tableau pour stocker les indices de la meme caracter et n le nombre d'indices.
            char caracter=0;
            char *guesschar;//pour tester si le caracter tape exist dans le mot secret.
            char guessword[10]=" ";

            char motSecret[10];
            for(i=0;i<randNumb(0,13);i++)
            fscanf(pntr,"%s",motSecret);
            for(i=0;i<strlen(motSecret);i++)
            {
                guessword[i]='*';
            }

            while(vie>0&&(d!=strlen(motSecret)) )//ce loop pour si le joueur a trouver le motsecret ou non.
          {
              printf("enter a character: ");
              caracter=lireChar();
              guesschar=strchr(motSecret,caracter);//fonction cherche caracter dans motsecret et renvoie son adresse et NULL si n'exist pas.
              //i=(guesschar-motSecret); c'est remarque intelegent.
              if(guesschar==NULL)
              {
                vie--;
                printf("you sill have %d try.\n",vie);
              }
              else
              {
                  n=findIndexs(motSecret,caracter,indTab);
                  if(strchr(guessword,caracter)==NULL)
                    {d+=n;}
                    else{printf("deja trouvee\n");}
                  for(i=0;i<n;i++) //remplace les cas contient caracter pas eu dans guessword.
                  {
                      guessword[indTab[i]]=caracter;
                  }
                  if(d<strlen(motSecret))
                  printf("the guess word now is %s\n",guessword);
                  if(strlen(motSecret)==d)
                    {printf("bravo le mot secret est %s\n",guessword);
                    printf("\n\npress 0 to leave of 1 to play again:");
                    scanf("%d",&boolean);
                    printf("\n++++++++++++++++++++++++++++++++++++\n");
                    }
                  //ici essayer de printer le mote guess ***f*d* comme ça , chrcher les indice de caracter dans le mot secret et les mettent a la place des etoiles ok
              }

          }


          }
        }
        else{printf("I can't open the file");}
        fclose(pntr);
    return 0;
}


