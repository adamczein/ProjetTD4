/*
 * Programme TD4 du cours INF1015
 * \auteurs Salma Zaghloul et Adam El Zein
 * \date 6 juin 2023
 * \Créé le 31 mai 2023
 */

#pragma once
#include "VilainHeros.h"

void VilainHeros::afficher(ostream& os) const
{
    Personnage::afficher(os); // Call the afficher function from the Personnage base class

    string jeuParution = getTitreJeu() + "-" + Heros::getTitreJeu(); // Use Heros::getTitreJeu() instead of heros.getTitreJeu()
   /* os << "Parution: " << jeuParution << endl*/;

    os << "Objectif: " << Vilain::getObjectif() << endl; // Use Vilain::getObjectif() instead of getObjectif()

    os << "Ennemi: " << Heros::getEnnemi() << endl; // Use Heros::getEnnemi() instead of getEnnemi()

    os << "Allies: " << endl;
    for (const auto& allie : Heros::getAllies()) // Use Heros::getAllies() instead of getAllies()
    {
        os << "\t" << allie << endl;
    }

    os << "Mission spéciale: " << Vilain::getObjectif() << " dans le monde de " << Heros::getTitreJeu() << endl;
}
