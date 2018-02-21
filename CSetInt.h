#ifndef CSETINT_H_INCLUDED
#define CSETINT_H_INCLUDED

/*

Exercice PRJ0 5 : La classe CSetInt

En reprenant la classe CSetInt r�alis�e pr�c�demment, que faut-il lui ajouter afin que l�on puisse
transmettre un objet de cette classe en param�tre � une fonction ? <-- IL FAUT UN CONSTRUCTEUR PAR COPIE
On en d�duira que l�objet doit �tre pass� par valeur � la fonction.

-- Lors d'un passage par valeur:

-- (main(){ int a =2; fct_val(a); void fct_val (int nb) )
--  on cr�e une copie de la variable pass�e, donc une modification
-- de celle-ci dans le corps de la fonction n'entra�nera pas de changement pour celle pr�sente dans le code appelant.

-- Lors d'un passage par r�f�rence:

-- (main(){ int a =2; fct_ref(a); } void fct_ref (int &nb) ) // on ne peut pas faire  main () { fct_ref(2); }
-- on passe un acc�s � la variable transmise, une modification impactera donc la variable dans le code appelant.

-- Le passage par adresse :

-- (main(){ int a =2; fct_ptr(&a);}  void fct_ptr (int* nb) )
-- se fait par l'interm�diaire de pointeur. Il annonce que la ressource est optionnelle (ptr peut etre null)


*/

class CSetInt
	{
	private:		 // donn�es membres

	int *m_pTab;
	int m_longueurTabMax;
	int m_nbElements;


	public: 		 // fonctions membres

	CSetInt ();		                    // constructeur (c'tor)
	CSetInt(int);	                    // constructeur
	CSetInt(const CSetInt& OsetInt);    // constructeur par copie
	~CSetInt();	 	                    // destructeur

	int addInt(int); 	// ajoute un �l�ment au tableau
	void nbInt();		// donne le nombre d'�l�ments du tableau
	int isIntIn(int);	// indique si l'entier est present ds le tableau

	};


#endif // CSETINT_H_INCLUDED
