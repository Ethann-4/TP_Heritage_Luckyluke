#include "Humain.h"

Humain::Humain(const string nom, const string boissonFavorite)
	: nom(nom), boissonFavorite(boissonFavorite) {}

string Humain::getNom() const {
	return nom;
}

string Humain::getBoissonFavorite() const {
	return boissonFavorite;
}

void Humain::setBoissonFavorite(const string nouvelleBoissonFavorite) {
	if (!nouvelleBoissonFavorite.empty())
		boissonFavorite = nouvelleBoissonFavorite;
}

string Humain::parle(const string texte) const {
	return "(" + nom + ")--" + texte;
}

void Humain::sePresente() const {
	cout << "(" << nom << ") -- Bonjour, je suis " << nom
		<< " et j'aime le " << boissonFavorite << "." << endl;
}

void Humain::boit() const {
	cout << "(" << nom << ") -- Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}

void Humain::sert() const
{
	cout << "(Robert) -- " << " Tiens " << getNom() << " un verre de " << getBoissonFavorite() << terminePhrase() << endl;
}

string Humain::terminePhrase() const
{
	return " mon gars.";
}
