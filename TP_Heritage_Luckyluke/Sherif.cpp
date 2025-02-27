#include "Sherif.h"
#include <iostream>

using namespace std;

Sherif::Sherif(const string& nom)
	: Humain(nom, "eau"), nombreBrigandsCoffres(0) {}

void Sherif::sePresente() const {
	cout << "(" << nom << ") -- Bonjour, je suis Sherif " << getNom()
		<< " et j aime " << getBoissonFavorite() << "." << endl;
}

void Sherif::rechercheBrigand(const Humain& brigand, int prime) const {
	cout << "** OYEZ OYEZ BRAVE GENS ! ! " << prime << "$ a qui arretera "
		<< brigand.getNom() << " mort ou vif ! !" << endl;
}

void Sherif::coffrerBrigand(const Humain& brigand) {
	nombreBrigandsCoffres++;
	cout << "(" << brigand.getNom() << ") -- Damned, je suis fait ! "
		<< getNom() << ", tu m as eu !" << endl;
}
