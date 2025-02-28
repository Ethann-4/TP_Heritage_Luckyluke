#pragma once
#include <string>
#include"Arme.h"
using namespace std;

class Arme {
private:
	string nom;
	int capacite;
	int nbBalles;
	int prix;

public:

	Arme(const string& nom = "Smith&Wesson", int prix = 100, int capacite = 6, int nbBalles = 0);


	string getNom() const;
	int getNbBalles() const;
};
