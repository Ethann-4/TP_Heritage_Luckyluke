// TP_Heritage_Luckyluke.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
using namespace std;

int main() {

	Humain lucky("Lucky Luke", "coca-cola");
	cout << "Une histoire sur " << lucky.getNom() << endl;
	lucky.sePresente();
	lucky.boit();

	Humain* joe = new Humain("Joe");
	cout << "Une histoire sur " << joe->getNom() << endl;
	joe->setBoissonFavorite("whisky");
	joe->sePresente();
	joe->boit();
	delete joe;

	Cowboy cowboyLucky("Lucky Luke", "le Cow-boy Solitaire");
	Dame jenny("Jenny", "lait", "blanche");
	cout << "Une histoire sur lucky luke le cowboy" << endl;
	cowboyLucky.sePresente();
	jenny.sePresente();

	jenny.changeDeRobe("verte");
	cowboyLucky.boit();
	jenny.boit();

	return 0;
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.


