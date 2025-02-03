#include "Dame.h"

Dame::Dame(const string nom, const string boissonFavorite, const string couleurRobe)
	: Humain(nom, boissonFavorite), couleurRobe(couleurRobe), etat("libre") {}

string Dame::getNom() const {
	return "Miss " + nom;
}

string Dame::getEtat() const {
	return etat;
}

void Dame::sePresente() const {
	cout << "(" << nom << ") -- Bonjour, je suis " << getNom()
		<< " et j'ai une jolie robe " << couleurRobe << "." << endl;
}

void Dame::changeDeRobe(const string& nouvelleCouleur) {
	couleurRobe = nouvelleCouleur;
	cout << "(" << nom << ") -- Regardez ma nouvelle robe " << couleurRobe << " !" << endl;
}

void Dame::boit() const {
	cout << "(" << nom << ") -- Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}
