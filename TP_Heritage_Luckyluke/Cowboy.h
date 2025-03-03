#ifndef COWBOY_H
#define COWBOY_H

#include "Humain.h"
#include "Brigand.h"
#include "Arme.h"
#include <iostream>
#include <string>

using namespace std;

class Cowboy : public Humain {
private:
	string qualite;
	int popularite;
	Arme* arme;

public:
	Cowboy(const string nom, const string qualite = "le Cowboy à talent", const string boissonFavorite = "whisky");
	~Cowboy();

	int getPopularite();
	void setPopularite();
	string getQualite();
	void setQualite(const string qualite);
	void sePresente() const;
	void incrementePopularite();
	void decrementePopularite();
	void tire(Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void libere(Dame& dame);
	void boit() const;
	void setArme(Arme* nouvelleArme);

};

#endif
