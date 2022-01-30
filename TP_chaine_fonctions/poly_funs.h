typedef struct monom monom;
struct monom
{
    int d;
    float c;
    monom *next;
};
monom *insert_monom(monom *,int ,float );
monom *ins_in_ord(monom *,int ,float );
void affiche_poly(monom *);
monom *derv_poly(monom *);
float calcl_p_x(monom *,float );
monom *supp_monom(monom *,int );
