#include "Cowboy.h"

Cowboy::Cowboy(const string nom, const string surnom, const string boissonFavorite)
	: Humain(nom, boissonFavorite), surnom(surnom) {}

void Cowboy::sePresente() const {
	cout << "(" << nom << ") -- Bonjour, on m'appelle " << surnom
		<< ", je suis " << nom << " et j'aime le " << boissonFavorite << "." << endl;
}

void Cowboy::boit() const {
	cout << "(" << nom << ") -- Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}
