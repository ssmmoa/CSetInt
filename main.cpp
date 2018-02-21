#include "iostream"
#include "CSetInt.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define ENCORE 1
#define SORTIE 0

void fonctionUtiliseObjet(CSetInt OsetInt);

int main()
{
    int nombre;

    cout << "Entrer taille" << endl;
    cin >> nombre ;

    CSetInt TabInt(nombre);

    // ajouter des nb ds le tableau
    do{
        cout << "Entrer un nb POUR sortir taper 0" << endl;
        cin >> nombre ;

        if(nombre != SORTIE)
        {
            TabInt.addInt(nombre);
        }

    }while(nombre != SORTIE);

    cout << "Entrer un nb POUR voir si il est ds le tableau" << endl;
    cin >> nombre ;

    TabInt.isIntIn(nombre);


    cout << "NB d'entiers dans le tableau:" << endl;
    TabInt.nbInt();

    CSetInt copie(TabInt);

    fonctionUtiliseObjet(copie);

    return 0;
}


void fonctionUtiliseObjet(CSetInt OsetInt)
{

    OsetInt.isIntIn(5);

}
