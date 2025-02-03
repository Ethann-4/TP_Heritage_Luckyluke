#include "Cowboy.h"

Cowboy::Cowboy(const string nom, const string qualite, const string boissonFavorite)
	: Humain(nom, boissonFavorite), qualite(qualite) {}

void Cowboy::sePresente() const {
	cout << "(" << nom << ") -- Bonjour, on m'appelle " << qualite
		<< ", je suis " << nom << " et j'aime le " << boissonFavorite << "." << endl;
}

void Cowboy::boit() const {
	cout << "(" << nom << ") -- Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}
