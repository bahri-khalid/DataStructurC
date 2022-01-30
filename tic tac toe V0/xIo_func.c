void permutation(int t,int *j)
{
    switch (t)
    {
    case 3:
        if(*j==2||*j==5|*j==8)
            *j=*j-2;
        else if(*j==0||*j==3|*j==6)
            *j=*j+2;
        break;
    case 7:
        if(*j==6||*j==7|*j==8)
            *j=*j-6;
        else if(*j==0||*j==1|*j==2)
            *j=*j+6;
        break;
    case 9:
        if(*j!=9)
            *j=abs(*j-8);
        break;
    }
}

void affich_permut(char *T,int t)
{
    system("cls");
    int j,i;
        for(j=0;j<9;j++)
        {
            i=j;
            if(j%3==0)
                printf("\n\t\t\t\t\t        ");
            permutation(t,&i);
            printf("[%c] ",T[i]);
        }
        printf("\n");
}
