#ifndef BRIGAND_H
#define BRIGAND_H

#include <iostream>
#include <string>
#include "humain.h"

using namespace std;

class Dame;
class Cowboy;

class Brigand : public Humain
{
public:
	Brigand(const string nom, const string boissonFavorite = "tord-boyaux",
		const string comportement = "mechant", int recompense = 0);

	string getComportement() const;
	int getNbDamesEnlevees() const;
	int getRecompense() const;

	void sePresente() const;
	void kidnappe(Dame& dame); 
	void seFaitEmprisonner(Cowboy& cowboy); 
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison() const;
	void prix() ;
	void nbDame();
private:
	string comportement;
	int nbDamesEnlevees;
	int recompense;
	bool enPrison;
};

#endif 