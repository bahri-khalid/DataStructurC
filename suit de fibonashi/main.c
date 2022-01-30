#include <stdio.h>
#include <stdlib.h>
void Produit_matriciel(int A[2][2],int B[2][2],int P[4]);
int main()
{
    int A[2][2]={{0,1},
                 {1,1}};
    long int P[2][2]={{0,1},
                 {1,1}};
    long int T[4]={0};
    int i,n;
    printf("entrer n = ");
    scanf("%d",&n);
    for(i=2;i<n+2;i++)
    {
        Produit_matriciel(A,P,T);
        P[0][0]=T[0];
        P[0][1]=T[1];
        P[1][0]=T[2];
        P[1][1]=T[3];
    }
    int M[2][2]={{0,0},
                 {1,0}};
    Produit_matriciel(P,M,T);
    printf("[ %ld ]",T[2]);
    return 0;
}
void Produit_matriciel(int A[2][2],int B[2][2],int P[4])
{
    *P=A[0][0]*B[0][0]+A[0][1]*B[1][0];
    *(P+2)= A[1][0]*B[0][0]+A[1][1]*B[1][0];
    *(P+1)= A[0][0]*B[0][1]+A[0][1]*B[1][1];
    *(P+3)= A[1][0]*B[0][1]+A[1][1]*B[1][1];
}
