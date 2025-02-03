#pragma once

#include "Humain.h"
#include <iostream>
#include <string>

using namespace std;

class Cowboy : public Humain {
private:
	string surnom;

public:
	Cowboy(const string nom, const string surnom = "le Cowboy à talent", const string boissonFavorite = "whisky");

	void sePresente() const;
	void boit() const;
};
