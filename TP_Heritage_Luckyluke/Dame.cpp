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

void Dame::seFaireKidnapper()
{
	etat = "kidnappee"; 
	cout << "(" << nom << ") -- Au secours, je me fais kidnapper !" << endl;
}

void Dame::seFaitLiberer(Cowboy& cowboy)
{
	if (etat == "kidnappee") {
		etat = "libre";
		remercie(cowboy);
		cout << "(" << nom << ") -- Merci " << cowboy.getNom() << ", je suis enfin libre !" << endl;
	}
}

void Dame::changeDeRobe(const string nouvelleCouleur) {
	couleurRobe = nouvelleCouleur;
	cout << "(" << nom << ") -- Regardez ma nouvelle robe " << couleurRobe << " !" << endl;
}

void Dame::boit() const {
	cout << "(" << nom << ") -- Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}

void Dame::hurle()
{
	cout << "(" << nom << ") -- AAAAHHH !!!" << endl;
}

void Dame::remercie(const Cowboy& heros)
{
	cout << "(" << nom << ") -- Merci beaucoup, " << heros.getNom() << ", vous êtes mon sauveur !" << endl;
}
