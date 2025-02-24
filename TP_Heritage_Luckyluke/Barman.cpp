#include "Barman.h"
#include "Humain.h"
using namespace std;

Barman::Barman(const string nom, const string boissonFavorite, const string nomBar)
	:Humain(nom, boissonFavorite), nomBar(nomBar)
{
}

string Barman::getNomBar() const
{
	return nomBar ;
}

void Barman::sePresente() const
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom()
		<< " le barman du " << getNomBar() << " et j'aime le " << getBoissonFavorite() << terminePhrase() << endl;
}

void Barman::sert(const Humain& client)
{
	cout << "(" << nom << ") -- " << " Tiens " << getNom() << " un verre de " << getBoissonFavorite() << terminePhrase() << endl;
}


string Barman::terminePhrase() const
{
	return " mon gars. ";
}

