#include <iostream>
#include <string>

using namespace std;

class Humain {


public:

	Humain(const string nom, const string boissonFavorite = "eau");
	string getNom();
	string getBoissonFavorite();
	void setBoissonFavorite(const string nouvelleBoissonFavorite);
	string parle(const string& texte);
	void sePresente();
	void boit();

protected :
	string nom;
	string boissonFavorite;
 
};

