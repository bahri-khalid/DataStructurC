#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[10]={0};
    printf("entrer votre nom: ");
    fgets(nom,10,stdin);
    printf("votre nom est %s !",nom);
    fgets(nom,10,stdin);
    printf("votre nom est %s !",nom);
    return 0;
}
