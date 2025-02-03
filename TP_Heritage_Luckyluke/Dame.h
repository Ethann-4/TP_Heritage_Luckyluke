#pragma once

#include "Humain.h"
#include <iostream>
#include <string>

using namespace std;

class Dame : public Humain {
public:
	Dame(const string nom, const string boissonFavorite = "lait", const string couleurRobe = "blanche");
	string getNom() const;
	string getEtat() const;
	void sePresente() const;
	void seFaireKidnapper() ;
	void seFaitLiberer(Cowboy & cowboy);
	void changeDeRobe(const string nouvelleCouleur);
	void boit() const;

protected:
	void hurle();
	void remercie(const Cowboy & heros);

private:
	string couleurRobe;
	string etat;
};
