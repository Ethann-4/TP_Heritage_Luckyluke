#include "Dame.h" 
#include "Cowboy.h" 



Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement, int recompense)
	: Humain(nom, boissonFavorite), comportement(comportement),
	nbDamesEnlevees(0), recompense(recompense), enPrison(false) {}

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
	cout << "(" << nom << ") -- "<< "Bonjour, je suis " << getNom() << " et je suis le " << comportement
		<< ". J'aime le " << getBoissonFavorite() << "." << endl;

}

void Brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison())
	{
		dame.seFaireKidnapper();
		nbDamesEnlevees++;
		augmenteRecompense();
		cout << "(" << nom << ") -- "  << "Ah ah ! " << dame.getNom() << ", tu es mienne desormais !" << endl;
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

void Brigand::prix()
{
	cout << "(" << nom << ") -- " << "Ma tete est mise a prix de " << recompense << " $ !" << endl;
}

void Brigand::nbDame()
{
	cout << "(" << nom << ") -- " << "J'ai l'air mechant et j'ai deja kidnappe " << nbDamesEnlevees << " dames !" << endl;
}
