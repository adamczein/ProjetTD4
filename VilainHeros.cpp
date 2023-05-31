#pragma once
#include "VilainHeros.h"

void VilainHeros::afficher(ostream& os) const
{
	Personnage::afficher(os);
	os << "Allies: " << endl;
	for (auto&& allie : getAllies())
		os << allie << endl;
	os << "Ennemi: " << getEnnemi() << endl;
	os << "Objectif: " << getObjectif() << endl;
	os << "Mission Speciale: " << mission_ << endl;
}