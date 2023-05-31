#pragma once
#include "Personnage.h"
#include <vector>
#include <string>
#include <iostream>

class Heros : public virtual Personnage
{
public:
	Heros() = default;
	Heros(const string& nom, const string& titreJeu, const string& ennemi, vector<string> allies) : Personnage(nom, titreJeu), allies_(allies), ennemi_(ennemi) {}
	void afficher(ostream& os) const;

	string getEnnemi() const { return ennemi_; }
	vector<string> getAllies() const { return allies_; }
private:
	vector<string> allies_;
	string ennemi_;
};

