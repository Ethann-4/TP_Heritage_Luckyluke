#include "Cowboy.h"
#include "Dame.h"
#include "Brigand.h"
#include "Arme.h"
#include <iostream>

using namespace std;

Cowboy::Cowboy(const string nom, const string qualite, const string boissonFavorite)
	: Humain(nom, boissonFavorite), qualite(qualite), popularite(0), arme(NULL) {}

Cowboy::~Cowboy() {
	if (arme != NULL) {
		delete arme;
	}
}

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
	cout << "(" << nom << ") -- Bonjour, je suis " << qualite << " " << getNom()
		<< " et j'aime le " << getBoissonFavorite() << "." << endl;
}

void Cowboy::incrementePopularite() {
	popularite++;
}

void Cowboy::decrementePopularite() {
	if (popularite > 0) {
		popularite--;
	}
}

void Cowboy::tire(Brigand& brigand) {
	if (arme == NULL) {
		cout << getNom() << " n'a pas d'arme pour tirer sur " << brigand.getNom() << " !" << endl;
		return;
	}
	if (arme->getNbBalles() == 0) {
		cout << getNom() << " essaye de tirer sur " << brigand.getNom() << ", mais son arme est vide !" << endl;
		return;
	}

	cout << "** Le " << getQualite() << " " << getNom() << " tire sur " << brigand.getNom() << " **" << endl;
	arme->tire();
	cout << "(" << getNom() << ") -- Prends ça, rascal ! " << endl;
}

void Cowboy::emprisonne(Brigand& brigand) {
	cout << getNom() << " emprisonne " << brigand.getNom() << " !" << endl;
	incrementePopularite();
}

void Cowboy::libere(Dame& dame) {
	cout << qualite << " " << getNom() << " libère " << dame.getNom() << " !" << endl;
	incrementePopularite();
}

void Cowboy::boit() const {
	cout << getNom() << " boit un bon verre de " << getBoissonFavorite() << " !" << endl;
}

void Cowboy::setArme(Arme* nouvelleArme) {
	if (arme != NULL) {
		delete arme; 
	}
	arme = nouvelleArme;
}

