#include "Arme.h"

Arme::Arme(const string& nom, int prix, int capacite, int nbBalles)
	: nom(nom), prix(prix), capacite(capacite), nbBalles(nbBalles) {}

void Arme::tire() {
	if (nbBalles > 0) {
		cout << "** PAN! **" << endl;
		nbBalles--;
	}
	else {
		cout << "(" << nom << ") -- Clic ! Plus de balles !" << endl;
	}
}

void Arme::recharge() {
	nbBalles = capacite;
	cout << "(" << nom << ") -- L'arme est rechargée à " << nbBalles << " balles." << endl;
}

int Arme::getNbBalles() const {
	return nbBalles;
}

string Arme::getNom() const {
	return nom;
}
