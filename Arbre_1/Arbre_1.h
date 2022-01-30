#ifndef ARBRE_1_H_INCLUDED
#define ARBRE_1_H_INCLUDED
typedef struct arbre arbre;
struct arbre
{
   int value;
   arbre * FD;
   arbre * FG;
};
arbre *buildtree(arbre *,int);
void printtree(arbre *);
int profendeur(arbre *);
int maxi(int ,int );
int sumtree(arbre *);
int is_in_tree(arbre *,int );

#endif // ARBRE_1_H_INCLUDED
