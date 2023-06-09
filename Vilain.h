﻿/*
* Programme TD4 du cours INF1015
* \auteurs Salma Zaghloul et Adam El Zein
* \date 6 juin 2023
* \Cr�� le 31 mai 2023
*/
#pragma once
#include "Personnage.h"
#include <string>
#include <iostream>

class Vilain : public virtual Personnage
{
public:
    Vilain() = default;

    // Constructeur prenant le nom, le titre du jeu et l'objectif du vilain
    Vilain(const string& nom, const string& titreJeu, const string& objectif) : Personnage(nom, titreJeu), objectif_(objectif) {}

    // M�thode d'affichage pour afficher le nom, le titre du jeu, et l'objectif du vilain
    void afficher(ostream& os) const;

    // M�thode d'acc�s pour obtenir l'objectif du vilain
    string getObjectif() const;

    // M�thode d'acc�s pour obtenir le titre du jeu du vilain
    string getJeu() const { return getTitreJeu(); }

private:
    string objectif_;
};