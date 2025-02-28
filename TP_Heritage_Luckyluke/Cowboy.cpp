#include "Cowboy.h"
#include "Dame.h"
#include "Arme.h"
Cowboy::Cowboy(const string nom, const string qualite, const string boissonFavorite)
	: Humain(nom, boissonFavorite), qualite(qualite), popularite(0) {}



int Cowboy::getPopularite() {
	return popularite;
}

void Cowboy::setPopularite() {
	popularite++;
}

string Cowboy::getQualite() {
	return qualite;
}

void Cowboy::setQualite(const string qualite) {
	this->qualite = qualite;
}

void Cowboy::sePresente() const {
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << qualite << " " << getNom() << " et j'aime le " << getBoissonFavorite() << "." << endl;
}

void Cowboy::incrementePopularite() {
	popularite++;
}


void Cowboy::decrementePopularite() {
	if (popularite > 0) {
		popularite--;
	}
}


void Cowboy::tire(const Brigand& brigand) const {
	if (arme != NULL) {
		if (arme->getNbBalles() != 0) {
			cout << "** Le " << getQualite() << " " << getNom() << " tire sur " << brigand.getNom() << endl;
			arme->tire();
			cout << "(" << nom << ") -- " << "Prends ça, rascal ! " << endl;
		}
	}
}

void Cowboy::emprisonne(Brigand& brigand) {
	cout << getNom() << " emprisonne " << brigand.getNom() << " !" << endl;
	incrementePopularite();
}

void Cowboy::libere(Dame& dame) {
	cout << qualite << " " << getNom() << " libere " << dame.getNom() << " !" << endl;
	incrementePopularite();
}

void Cowboy::boit() const {
	cout << getNom() << " boit un bon verre de " << getBoissonFavorite() << " !" << endl;
}

void Cowboy::setArme(Arme* arme)
{
	this->arme = arme;
}