#include <iostream>
using namespace std;
const int huit=8;
const int seize=16;
struct piece
{
    int lig;
    int col;
    int indice; //vaut pour le numéro de piece dans la liste du joueur
    int id;  //id vaut pour le type de piece ( tour/reine/roi )
    string couleur;

};

void empty(int tab[huit][huit])
{
     for (int i=0;i<huit;i++)
    {
        for(int j=0;j<huit;j++)
        {
            tab[i][j]=0;
        }

    }

}

void start(int tab[huit][huit], piece joueur1[seize],piece joueur2[seize])
 //on place les pièces sur l'échiquier
{
    for(int i=0;i<seize;i++)
    {
        tab[joueur1[i].lig][joueur1[i].col]=joueur1[i].id;
        tab[joueur2[i].lig][joueur2[i].col]=joueur2[i].id;

    }
}

void move_piece(int tab[huit][huit])
{// fonction pour bouger une piece quelconque a une case quelconque avec seul verification que la case existe

string bloc;
string poser;
string tmp;
int numero,lettre,lettrebis,numerobis;


cout<<"Quel piece souhaitez vous deplacer, reponse sous forme A4/b5";
cin>>bloc;
lettre=bloc[0];
numero=bloc[1]-49;  //on prends la valeur ascii du numero ( compris entre 48 pour 0 et 57 pour 9 ) on lui soustrait 49 pour que la valeur 1 corresponds a la ligne 0 ( soit la premiere ligne de l echiquier )

while (!((lettre>64 && lettre<73)||(lettre>96 && lettre<105)))
{
    cout<<"Erreur dans les lettres,retry";
    cin>>tmp;
    lettre=tmp[0];

}
while(numero>7)
{
    cout<<"Erreur de numero, retry entre 1 et 8";
    cin>>numero;
    numero=numero-1;
}
if(lettre<75)
{
    lettre=lettre-65;
}
else()
{
    lettre=lettre-97
}

/////////////////////////////////////////////////////////////////////////////////// partie a suivre, repeter l etape precedente pour la case d atterissage et verifier si elle est bien vide
cout<<"Ou souhaitez vous placer cette piece ? "
cin>>poser
lettrebis=poser[0];
numerobis=poser[1]-49;
while (!((lettrebis>64 && lettrebis<73)||(lettrebis>96 && lettrebis<105)))
{
    cout<<"Erreur dans les lettres,retry";
    cin>>tmp;
    lettrebis=tmp[0];

}
while(numerobis>7)
{
    cout<<"Erreur de numero, retry entre 1 et 8";
    cin>>numerobis;
    numerobis=numerobis-1;
}
if(lettrebis<75)
{
    lettrebis=lettrebis-65;
}
else()
{
    lettrebis=lettrebis-97
}



}
int main()
 {int tab[huit][huit];
 empty(tab);
 move_piece(tab);
     return 0;
 }
