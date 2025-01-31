#include "Humain.h"

Humain::Humain(const string nom, const string boissonFavorite)
	: nom(nom), boissonFavorite(boissonFavorite) {}

string Humain::getNom()
{
	return nom;
}

string Humain::getBoissonFavorite()
{
	return boissonFavorite;
}

void Humain::setBoissonFavorite(const string nouvelleBoissonFavorite)
{
	if (!nouvelleBoissonFavorite.empty())
		boissonFavorite = nouvelleBoissonFavorite;
}

string Humain::parle(const string& texte)
{
	return "(" + nom + ")--" + texte;
}

void Humain::sePresente()
{
	cout << "(" << nom << ") -- Bonjour, je suis " << nom
		<< " et j'aime le " << boissonFavorite << "." << endl;
}

void Humain::boit()
{
	cout << "(" << nom << ") -- Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}


