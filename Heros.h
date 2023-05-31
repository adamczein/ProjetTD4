/*
 * Programme TD4 du cours INF1015
 * \auteurs Salma Zaghloul et Adam El Zein
 * \date 6 juin 2023
 * \Cr�� le 31 mai 2023
 */

#pragma once
#include "Personnage.h"
#include <vector>
#include <string>
#include <iostream>

class Heros : public virtual Personnage
{
public:
    Heros() = default; // Constructeur par d�faut

    // Constructeur prenant le nom, le titre du jeu, l'ennemi et une liste d'alli�s
    Heros(const string& nom, const string& titreJeu, const string& ennemi, vector<string> allies)
        : Personnage(nom, titreJeu), // Appel du constructeur de la classe de base Personnage avec le nom et le titre du jeu
        allies_(allies), // Initialisation de la liste d'alli�s
        ennemi_(ennemi) // Initialisation de l'ennemi
    {
    }

    // M�thode d'affichage pour afficher les informations du h�ros
    void afficher(ostream& os) const;

    // M�thode d'acc�s pour obtenir l'ennemi du h�ros
    string getEnnemi() const { return ennemi_; }

    // M�thode d'acc�s pour obtenir la liste des alli�s du h�ros
    vector<string> getAllies() const { return allies_; }

    // M�thode d'acc�s pour obtenir le titre du jeu du h�ros
    string getJeu() const { return getTitreJeu(); }

private:
    vector<string> allies_; // Liste des alli�s du h�ros
    string ennemi_; // Ennemi du h�ros
};

