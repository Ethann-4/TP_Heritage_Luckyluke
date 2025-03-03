#include "Brigand.h"
#include "Dame.h"
#include "Cowboy.h"
#include "Arme.h"
#include <iostream>

using namespace std;

Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement, int recompense)
	: Humain(nom, boissonFavorite), comportement(comportement), nbDamesEnlevees(0), recompense(recompense), enPrison(false), arme(nullptr) {}

Brigand::~Brigand() {
	if (arme != NULL) {
		delete arme;
		arme = NULL;
	}
}

string Brigand::getComportement() const {
	return comportement;
}

int Brigand::getNbDamesEnlevees() const {
	return nbDamesEnlevees;
}

int Brigand::getRecompense() const {
	return recompense;
}

void Brigand::sePresente() const {
	cout << "(" << nom << ") -- Bonjour, je suis " << getNom() << " et je suis le " << comportement
		<< ". J'aime le " << getBoissonFavorite() << "." << endl;
}

void Brigand::kidnappe(Dame& dame) {
	if (!estEnPrison()) {
		dame.seFaireKidnapper();
		nbDamesEnlevees++;
		augmenteRecompense();
		cout << "(" << nom << ") -- Ah ah ! " << dame.getNom() << ", tu es mienne désormais !" << endl;
	}
}

void Brigand::seFaitEmprisonner(Cowboy& cowboy) {
	if (!estEnPrison()) {
		enPrison = true;
		cout << "(" << nom << ") -- Damned, je suis fait ! " << cowboy.getNom() << ", tu m'as eu !" << endl;
	}
}

void Brigand::augmenteRecompense(const int prix) {
	if (prix > 0) {
		recompense += prix;
	}
}

void Brigand::diminueRecompense(const int prix) {
	if (prix > 0 && prix <= recompense) {
		recompense -= prix;
	}
}

bool Brigand::estEnPrison() const {
	return enPrison;
}

void Brigand::prix() {
	cout << "(" << nom << ") -- Ma tête est mise à prix de " << recompense << " $ !" << endl;
}

void Brigand::nbDame() {
	cout << "(" << nom << ") -- J'ai l'air méchant et j'ai déjà kidnappé " << nbDamesEnlevees << " dames !" << endl;
}


void Brigand::setArme(Arme* nouvelleArme) {
	if (arme != NULL) {
		delete arme; 
	}
	arme = nouvelleArme;
}


void Brigand::tire(Cowboy& cowboy) const {
	if (arme == NULL) {
		cout << getNom() << " n'a pas d'arme pour tirer sur " << cowboy.getNom() << " !" << endl;
		return;
	}
	if (arme->getNbBalles() == 0) {
		cout << getNom() << " essaye de tirer sur " << cowboy.getNom() << ", mais son arme est vide !" << endl;
		return;
	}

	cout << "** Le brigand " << getNom() << " tire sur " << cowboy.getNom() << " **" << endl;
	arme->tire();
	cout << "(" << getNom() << ") -- Prends ça, rascal ! " << endl;
}
