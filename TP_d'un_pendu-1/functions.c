char lireChar(void)//lire selement le premier caracter entre meme s'il ya d'autres.
{
    char caracter=0;
    caracter=getchar();
    caracter=toupper(caracter);//miniscule vere majuscule
    while(getchar()!='\n');
    return caracter;
}
int findIndexs(const char chaine[10],const char caracter,int *indTab) // trouver les positions de caracter et les stocker dans indTab[].
{
    int i=0,d=0;
    for(i=0;i<strlen(chaine);i++)
    {
        if(chaine[i]==caracter)
        {
            indTab[d]=i;
            d++;
        }
    }
    return d;
}
int randNumb(int Min,int Max)
{
    int n;
    n=rand()%(Max-Min+1)+Min;
    return n;
}
