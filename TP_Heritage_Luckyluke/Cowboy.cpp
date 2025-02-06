#include "Cowboy.h"

// Constructeur
Cowboy::Cowboy(const string nom, const string qualite, const string boissonFavorite)
	: Humain(nom, boissonFavorite), qualite(qualite), popularite(0) {}

// Accesseurs
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
	cout << "Bonjour, je suis " << getNom() << " et j'aime " << getBoissonFavorite() << "." << endl;
	cout << "Je suis " << qualite << "." << endl;
}

void Cowboy::incrementePopularite() {
	popularite++;
}


void Cowboy::decrementePopularite() {
	if (popularite > 0) {
		popularite--;
	}
}


void Cowboy::tire(const Brigand& brigand) {
	cout << getNom() << " tire sur " << brigand.getNom() << " !" << endl;
}

void Cowboy::emprisonne(Brigand& brigand) {
	cout << getNom() << " emprisonne " << brigand.getNom() << " !" << endl;
	incrementePopularite(); 
}

void Cowboy::libere(Dame& dame) {
	cout << getNom() << " libère " << dame.getNom() << " !" << endl;
	incrementePopularite(); 
}

void Cowboy::boit() const {
	cout << getNom() << " boit un bon verre de " << getBoissonFavorite() << " !" << endl;
}
