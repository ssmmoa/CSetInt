#ifndef CSETINT_H_INCLUDED
#define CSETINT_H_INCLUDED

/*

Exercice PRJ0 5 : La classe CSetInt

En reprenant la classe CSetInt réalisée précédemment, que faut-il lui ajouter afin que l’on puisse
transmettre un objet de cette classe en paramètre à une fonction ? <-- IL FAUT UN CONSTRUCTEUR PAR COPIE
On en déduira que l’objet doit être passé par valeur à la fonction.

-- Lors d'un passage par valeur:

-- (main(){ int a =2; fct_val(a); void fct_val (int nb) )
--  on crée une copie de la variable passée, donc une modification
-- de celle-ci dans le corps de la fonction n'entraînera pas de changement pour celle présente dans le code appelant.

-- Lors d'un passage par référence:

-- (main(){ int a =2; fct_ref(a); } void fct_ref (int &nb) ) // on ne peut pas faire  main () { fct_ref(2); }
-- on passe un accès à la variable transmise, une modification impactera donc la variable dans le code appelant.

-- Le passage par adresse :

-- (main(){ int a =2; fct_ptr(&a);}  void fct_ptr (int* nb) )
-- se fait par l'intermédiaire de pointeur. Il annonce que la ressource est optionnelle (ptr peut etre null)


*/

class CSetInt
	{
	private:		 // données membres

	int *m_pTab;
	int m_longueurTabMax;
	int m_nbElements;


	public: 		 // fonctions membres

	CSetInt ();		                    // constructeur (c'tor)
	CSetInt(int);	                    // constructeur
	CSetInt(const CSetInt& OsetInt);    // constructeur par copie
	~CSetInt();	 	                    // destructeur

	int addInt(int); 	// ajoute un élément au tableau
	void nbInt();		// donne le nombre d'éléments du tableau
	int isIntIn(int);	// indique si l'entier est present ds le tableau

	};


#endif // CSETINT_H_INCLUDED
