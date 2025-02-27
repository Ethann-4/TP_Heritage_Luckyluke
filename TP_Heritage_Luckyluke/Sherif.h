#pragma once
#include "Humain.h"
#include <string>

class Sherif : public Humain {
private:
	int nombreBrigandsCoffres;

public:
	Sherif(const string& nom = "Clint");

	void sePresente() const override;
	void rechercheBrigand(const Humain& brigand, int prime) const;
	void coffrerBrigand(const Humain& brigand);
};
