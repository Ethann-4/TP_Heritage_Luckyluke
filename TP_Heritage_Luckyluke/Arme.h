#ifndef ARME_H
#define ARME_H

#include <iostream>
#include <string>

using namespace std;

class Arme {
private:
	string nom;
	int capacite;
	int nbBalles;
	int prix;

public:
	Arme(const string& nom, int prix = 100, int capacite = 6, int nbBalles = 0);
	void tire();
	void recharge();
	int getNbBalles() const;
	string getNom() const;
};

#endif
