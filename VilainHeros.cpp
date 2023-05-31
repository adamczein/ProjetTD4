/*
 * Programme TD4 du cours INF1015
 * \auteurs Salma Zaghloul et Adam El Zein
 * \date 6 juin 2023
 * \Cr�� le 31 mai 2023
 */

#pragma once
#include "VilainHeros.h"

void VilainHeros::afficher(ostream& os, const Heros& heros) const
{
    Personnage::afficher(os); // Appel � la m�thode afficher de la classe de base Personnage pour afficher le nom et le titre du jeu

    // Fusion du jeu du vilain avec celui du h�ros, s�par�s par un trait d'union
    string jeuParution = getTitreJeu() + "-" + heros.getTitreJeu();
    os << "Parution: " << jeuParution << endl;

    os << "Objectif: " << getObjectif() << endl; // Affichage de l'objectif du vilain

    os << "Ennemi: " << getEnnemi() << endl; // Affichage de l'ennemi du h�ros

    os << "Allies: " << endl;
    for (auto&& allie : heros.getAllies()) // Parcours des alli�s du h�ros
    {
        os << "\t" << allie << endl; // Affichage de chaque alli� avec une indentation
    }

    os << "Mission sp�ciale: " << getObjectif() << " dans le monde de " << heros.getTitreJeu() << endl;
    // Affichage de la mission sp�ciale du VilainHeros, qui est l'objectif du vilain dans le monde du h�ros (jeu de parution du h�ros)
}
