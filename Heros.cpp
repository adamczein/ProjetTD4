/*
 * Programme TD4 du cours INF1015
 * \auteurs Salma Zaghloul et Adam El Zein
 * \date 6 juin 2023
 * \Cr�� le 31 mai 2023
 */

#pragma once
#include "Heros.h"

void Heros::afficher(ostream& os) const
{
    Personnage::afficher(cout); // Appel � la m�thode afficher de la classe de base Personnage pour afficher le nom et le titre du jeu
    os << "Ennemi: " << ennemi_ << endl; // Affichage de l'ennemi du h�ros
    os << "Allies: " << endl;
    for (auto&& allie : allies_) // Parcours de la liste des alli�s
    {
        os << allie << endl; // Affichage de chaque alli�
    }
}
