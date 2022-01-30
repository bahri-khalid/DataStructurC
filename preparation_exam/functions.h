typedef struct chaine chaine;
struct chaine
{
    int value;
    chaine *next;
};
/***************************************/
typedef struct head head;
struct head
{
    int taille;
    chaine *tete;
};

/***************************************/
typedef struct monome monome;
struct monome
{
    int deg;
    float cft;
    monome *next;
};
/**********************************************/
typedef struct polynome polynome;
struct polynome
{
    int degmax;
    monome *Queue;

};


/****************************************/
head *init_chaine(void);
void Empiler(head *,int );
void Emfiler(head *,int );
void insrt_gp(head *,int ,int );
void replace_gp(head *,int ,int );
void printls(head *);
void suppelement(head *, int );
void sorte(head *);
void sort_hero(head *);
void affpoly(polynome *);
void insert_order(polynome *,int, float);
polynome * mkpoly(void);

/********************************************/


