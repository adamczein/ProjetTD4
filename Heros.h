/*
 * Programme TD4 du cours INF1015
 * \auteurs Salma Zaghloul et Adam El Zein
 * \date 6 juin 2023
 * \Créé le 31 mai 2023
 */

#pragma once
#include "Personnage.h"
#include <vector>
#include <string>
#include <iostream>

class Heros : public virtual Personnage
{
public:
    Heros() = default; // Constructeur par défaut

    // Constructeur prenant le nom, le titre du jeu, l'ennemi et une liste d'alliés
    Heros(const string& nom, const string& titreJeu, const string& ennemi, vector<string> allies)
        : Personnage(nom, titreJeu), // Appel du constructeur de la classe de base Personnage avec le nom et le titre du jeu
        allies_(allies), // Initialisation de la liste d'alliés
        ennemi_(ennemi) // Initialisation de l'ennemi
    {
    }

    // Méthode d'affichage pour afficher les informations du héros
    void afficher(ostream& os) const;

    // Méthode d'accès pour obtenir l'ennemi du héros
    string getEnnemi() const { return ennemi_; }

    // Méthode d'accès pour obtenir la liste des alliés du héros
    vector<string> getAllies() const { return allies_; }

    // Méthode d'accès pour obtenir le titre du jeu du héros
    string getJeu() const { return getTitreJeu(); }

private:
    vector<string> allies_; // Liste des alliés du héros
    string ennemi_; // Ennemi du héros
};

