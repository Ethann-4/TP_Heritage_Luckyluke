#pragma once

#include "Humain.h"
#include "Brigand.h"
#include <iostream>
#include <string>

using namespace std;

class Cowboy : public Humain {
private:
	string qualite;
	int popularite;

public:
	Cowboy(const string nom, const string qualite = "le Cowboy à talent", const string boissonFavorite = "whisky");
	int getPopularite();
	void setPopularite();
	string getQualite();
	void setQualite(const string qualite);
	void sePresente() const;
	void incrementePopularite();
	void decrementePopularite();
	void tire(const Brigand & brigand);
	void emprisonne(Brigand & brigand);
	void libere(Dame & dame);
	void boit() const;
};