#include <stdio.h>
#include <stdlib.h>
#include"xIo_func.h"
int main()
{
    char *tab;
    int i,*J,j,t,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0;
    J=&j;
    srand(time(NULL));
    tab=malloc(9*sizeof(char));
    for(i=0;i<9;i++)
    {
        tab[i]=' ';
    }
       affich_permut(tab,0);

        printf("position: ");
        scanf("%d",&j);
        t=j;
        j--;
        permutation(t,J);
        tab[j]='X';
    for(i=1;i<9;i++)
    {
            if(i%2==0)
            {
                 while(1)
                 {
                    printf("position: ");
                    scanf("%d",&j);
                    j--;
                    permutation(t,J);
                    if(tab[j]==' ')
                        break;
                    printf("\4occupe\4\n\a");
                 }
                tab[j]='X';
            }else
            {
                if(tab[0]=='X'&&i==1)//pour que le premier cas execute si et seulement si tab[0]=x dons la premier insertion
                    d1=1;
                if(tab[0]=='X'&&d1==1)//le premier cas 1
                {
                    tab[4]='O';
                    if((tab[3]=='X'||tab[6]=='X')&&i==3)
                        d2=1;
                    if(tab[3]=='X'&&d2==1)//le cas 1-1
                    {
                        tab[6]='O';
                        if(tab[2]=='X'&&i==5)
                            d3=1;
                        if(tab[2]!='X'&&i==5)
                        {
                            tab[2]='O';
                            affich_permut(tab,t);
                            printf("the computer wen!!\n");
                            exit(1);
                        }else if(tab[2]=='X'&&d3==1)//le cas 1-1-1
                        {
                            tab[1]='O';
                            if(tab[7]=='X'&&i==7)
                                d4=1;
                            if(tab[7]!='X'&&i==7)
                            {
                                tab[7]='O';
                                affich_permut(tab,t);
                                printf("the computer wen!!\n");
                                exit(1);
                            }else if(tab[7]=='X'&&d4==1)//le cas 1-1-1-1
                            {
                                tab[5]='O';

                            }
                        }
                    }else if(tab[6]=='X'&&d2==1)//le cas 1-2
                    {
                        tab[3]='O';
                        if(tab[5]=='X'&&i==5)
                            d3=1;
                        if(tab[5]!='X'&&i==5)
                        {
                            tab[5]='O';
                            affich_permut(tab,t);
                            printf("the computer wen!!\n");
                            exit(1);

                        }else if(tab[5]=='X'&&d3==1)//le cas 1-2-1
                        {
                            tab[1]='O';
                            if(tab[7]=='X'&&i==7)
                                d4=1;
                            if(tab[7]!='X'&&i==7)
                            {
                                tab[7]='O';
                               affich_permut(tab,t);
                                printf("the computer wen!!\n");
                                exit(1);

                            }else if(tab[7]=='X'&&d4==1)//le cas 1-2-1-1
                            {
                                tab[8]='O';
                            }
                        }


                    }
                    //**************************************************************************
                      if((tab[1]=='X'||tab[2]=='X')&&i==3)
                        d5=1;
                    if(tab[1]=='X'&&d5==1)//le cas 1-2
                    {
                        tab[2]='O';
                        if(tab[6]=='X'&&i==5)
                            d3=1;
                        if(tab[6]!='X'&&i==5)
                        {
                            tab[6]='O';
                            affich_permut(tab,t);
                            printf("the computer wen!!\n");
                            exit(1);
                        }else if(tab[6]=='X'&&d3==1)//le cas 1-2-1
                        {
                            tab[3]='O';
                            if(tab[5]=='X'&&i==7)
                                d4=1;
                            if(tab[5]!='X'&&i==7)
                            {
                                tab[5]='O';
                                affich_permut(tab,t);
                                printf("the computer wen!!\n");
                                exit(1);
                            }else if(tab[5]=='X'&&d4==1)//le cas 1-2-1-1
                            {
                                tab[7]='O';

                            }
                        }
                    }else if(tab[2]=='X'&&d5==1)//le cas 1-2-2
                    {
                        tab[1]='O';
                        if(tab[7]=='X'&&i==5)
                            d3=1;
                        if(tab[7]!='X'&&i==5)
                        {
                            tab[7]='O';
                            affich_permut(tab,t);
                            printf("the computer wen!!\n");
                            exit(1);

                        }else if(tab[7]=='X'&&d3==1)//le cas 1-2-2-1
                        {
                            tab[3]='O';
                            if(tab[5]=='X'&&i==7)
                                d4=1;
                            if(tab[5]!='X'&&i==7)
                            {
                                tab[5]='O';
                                affich_permut(tab,t);
                                printf("the computer wen!!\n");
                                exit(1);

                            }else if(tab[5]=='X'&&d4==1)//le cas 2-2-2-1
                            {
                                tab[8]='O';
                            }
                        }
                    }
                     //*******************************************************************************
                if((tab[5]=='X'||tab[7]=='X')&&i==3)
                    d6=1;
                if(tab[5]=='X'&&d6==1)//ici vous pouvez etuliser les di sauf le d1
                {
                    tab[2]='O';
                    if(tab[6]!='X'&&i==5)
                    {
                        tab[6]='O';
                        affich_permut(tab,t);
                        printf("the computer wen!!\n");
                        exit(1);
                    }else if (tab[6]=='X')
                    {
                        tab[3]='O';
                        if(tab[6]=='X'&&i==7)
                        {
                            tab[7]='O';
                        }else if(tab[7]=='X'&&i==7)
                        {
                            tab[6]='O';
                        }
                    }

                }
                //**********************************************************************************
                 if(tab[7]=='X'&&d6==1)//ici vous pouvez etuliser les di sauf le d1
                {
                    tab[6]='O';
                    if(tab[2]!='X'&&i==5)
                    {
                        tab[2]='O';
                        affich_permut(tab,t);
                                    printf("the computer wen!!\n");
                                    exit(1);
                    }else if (tab[2]=='X')
                    {
                        tab[1]='O';
                        if(tab[2]=='X'&&i==7)
                        {
                            tab[5]='O';
                        }else if(tab[5]=='X'&&i==7)
                        {
                            tab[2]='O';
                        }
                    }

                }
                //****************************************************************************************
                        if(tab[8]=='X'&&i==3)
                            d7=1;
                        if(tab[8]=='X'&&d7==1)
                        {
                            tab[7]='O';
                            if(tab[1]=='X'&&i==5)//ici vous pouvez etuliser les di sauf le d1
                                d2=1;
                            if(tab[1]!='X'&&i==5)
                            {
                                tab[1]='O';
                                affich_permut(tab,t);
                                    printf("the computer wen!!\n");
                                    exit(1);
                            }else if(tab[1]=='X'&&d2==1)
                            {
                                tab[2]='O';
                                if(tab[6]!='X'&&i==7)
                                {
                                    tab[6]='O';
                                    affich_permut(tab,t);
                                    printf("the computer wen!!\n");
                                    exit(1);
                                }else if(tab[6]=='X')
                                {
                                    tab[3]='O';
                                }
                            }
                        }
                }

            }
            affich_permut(tab,t);

    }

    printf("\n\t\t\t\t\t\2\3\4Neutral result\4\3\2\n\n\n\n");
    return 0;
}

