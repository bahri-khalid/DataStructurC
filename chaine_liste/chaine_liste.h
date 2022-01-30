typedef struct chaine chaine;
struct chaine
{
    int age;
    float weight;
    chaine *next;
};
typedef struct head head;
struct head
{
    int taille;
    chaine *node;
};
void creat_vl(head *);
void test_vl(head *);
void add2head(head *,int,float);
void aff_chaine(head *);
void add2head_G(head *,chaine *);
void add2end_G(head *,chaine *);
void add2end(head *,int,float);
void add2giv_pos(head *,chaine *,chaine *);
chaine *find_adress(head *,int );
void add_bef_gp(head *,chaine *,chaine *);
