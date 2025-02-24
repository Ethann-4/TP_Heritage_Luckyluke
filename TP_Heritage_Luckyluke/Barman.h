#pragma once
#include "Humain.h"
#include <string>

class Barman : public Humain {
private:
	string nomBar;

public:
	Barman(const string nom = "Robert", const string boissonFavorite = "biere", const string nomBar = "leBarr");

	string getNomBar() const ;
	string terminePhrase() const ;
	void parle(const string texte) ;
	void sePresente() const;
	void sert(const Humain& client);

};
