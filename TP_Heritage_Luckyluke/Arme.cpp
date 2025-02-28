#include "Arme.h"


Arme::Arme(const string& nom, int prix, int capacite, int nbBalles)
	: nom(nom), prix(prix), capacite(capacite), nbBalles(nbBalles) {}


string Arme::getNom() const {
	return nom;
}

int Arme::getNbBalles() const {
	return nbBalles;
}
