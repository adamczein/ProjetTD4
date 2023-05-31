/*
 * Programme TD4 du cours INF1015
 * \auteurs Salma Zaghloul et Adam El Zein
 * \date 6 juin 2023
 * \Créé le 31 mai 2023
 */

#pragma once
#include "Heros.h"

void Heros::afficher(ostream& os) const
{
    Personnage::afficher(cout); // Appel à la méthode afficher de la classe de base Personnage pour afficher le nom et le titre du jeu
    os << "Ennemi: " << ennemi_ << endl; // Affichage de l'ennemi du héros
    os << "Allies: " << endl;
    for (auto&& allie : allies_) // Parcours de la liste des alliés
    {
        os << allie << endl; // Affichage de chaque allié
    }
}
