#include "iostream"
#include "CSetInt.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

CSetInt::CSetInt()	//definition du constructeur
{
	// definition des données membres
	m_longueurTabMax = 10;
	m_nbElements = 0;
}

CSetInt::CSetInt(int nbMax)
{
    m_nbElements = 0;
	m_longueurTabMax = nbMax;
	m_pTab = (int*)malloc(sizeof(int) * m_longueurTabMax);

	if(m_pTab == NULL)
	{
		cout << "Erreur allocation memoire" << endl;
		//assert(0);
	}

}

CSetInt::CSetInt(const CSetInt& OsetInt)
{
    m_nbElements = OsetInt.m_nbElements;
    m_longueurTabMax = OsetInt.m_longueurTabMax;
    m_pTab = (int*)malloc(sizeof(int) * m_longueurTabMax);

    for(int i = 0; i < m_longueurTabMax; i++)
    {
        m_pTab[i] = OsetInt.m_pTab[i];
    }

    cout << "CSetInt copie" << endl;
}

CSetInt::~CSetInt()	// definition du destructeur
{
	cout << "CSetInt destructor" << endl;
	free (m_pTab);
}

int CSetInt::addInt(int nb)
{
	int rc = 0;

	// si nb déja ds tableau -> fct isIntIn

	rc = isIntIn(nb);

	if(rc == 1)
	{
		return nb;
	}

	// si taille max atteinte

	if(m_longueurTabMax == m_nbElements)
	{
		cout << "longueur max du tab atteinte" << endl;
		return nb;
	}

	// insertion du nb ds le tableau

	m_pTab[m_nbElements] = nb;

	// incrementation du nombre de int au sein du tableau

	m_nbElements ++;

	return 0;
}

void CSetInt::nbInt()
{
	// affichage du nb d'int présents ds le tableau

	cout << m_nbElements << "nombres presents" << endl;

}

int CSetInt::isIntIn(int nb)
{
	// si nb est déja dans le tableau
	int rc = 0;
	int dI;

    if(m_nbElements > 0)
    {
        for(dI = 0; dI < m_nbElements; dI++ )
        {
            if(nb == m_pTab[dI])
            {
                cout << "nombre " << nb << " deja present" << endl;
                rc = 1;
            }
        }

    }

    if( rc == 0)
    {
        cout << "nombre " << nb << " pas present" << endl;
    }

    return rc;
}
