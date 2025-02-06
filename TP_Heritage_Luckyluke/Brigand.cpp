#include "Dame.h" 
#include "Cowboy.h" 

Brigand::Brigand(const string nom/*=""*/, const string boissonFavorite/*="tord-boyaux"*/, const string comportement/*="mechant"*/)
	: Humain(nom, boissonFavorite), comportement(comportement),
	nbDamesEnlevees(0), recompense(0), enPrison(false)
{
}


string Brigand::getComportement() const
{
	return comportement;
}

int Brigand::getNbDamesEnlevees() const
{
	return nbDamesEnlevees;
}

int Brigand::getRecompense() const
{
	return recompense;
}

void Brigand::sePresente() const
{
	cout << "Coucou, je m'appelle " << getNom() << " et je suis " << comportement
		<< ". J'adore le " << getBoissonFavorite() << "." << endl;

}

void Brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison())
	{
		dame.seFaireKidnapper();
		nbDamesEnlevees++;
		augmenteRecompense();
		cout << "Ah ah ! " << dame.getNom() << ", tu es mienne désormais !" << endl;
	}
}

void Brigand::seFaitEmprisonner(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ") -- " << "Damned, je suis fait ! " << cowboy.getNom() << ", tu m'as eu !" << endl;
	}
}

void Brigand::augmenteRecompense(const int prix)
{
	if (prix > 0)
	{
		this->recompense += prix;
	}
}

void Brigand::diminueRecompense(const int prix)
{
	if (prix > 0 && prix <= recompense)
	{
		this->recompense -= prix;
	}
}

bool Brigand::estEnPrison() const
{
	return enPrison;
}