#pragma once

#include <iostream>
#include <string>

using namespace std;

class Humain {
public:
	Humain(const string nom, const string boissonFavorite = "eau");
	string getNom() const;
	string getBoissonFavorite() const;
	void setBoissonFavorite(const string nouvelleBoissonFavorite);
	string parle(const string texte) const;
	void sePresente() const;
	void boit() const;

protected:
	string nom;
	string boissonFavorite;
};
