typedef struct chaine chaine;
typedef struct liste liste;
int Is_empty(liste *);
void add2list(liste *,float );
void afficher(liste *);
void add2head(liste *,float );
void add2end(liste *,float );
void add2head_G(liste *,chaine *);
void add2end_G(liste *,chaine *);
void creatvl(liste *);

struct liste
{
    int taille;
    chaine *tete;
};

struct chaine
{
    float num;
    char name[10];
    chaine *next;
};

