/*
* Programme TD4 du cours INF1015
* \auteurs Salma Zaghloul et Adam El Zein
* \date 6 juin 2023
* \Cr�� le 31 mai 2023
*/
#pragma once
#include <iostream>

using namespace std;

class Affichable
{
public:
    Affichable() = default; // Constructeur par d�faut

    virtual ~Affichable() = default; // Destructeur virtuel pour permettre la polymorphie

    // M�thode virtuelle pure pour afficher l'objet
    virtual void afficher(ostream& os) const = 0;

    // M�thode virtuelle pure pour changer la couleur de l'affichage
    virtual void changerCouleur(ostream& os, int couleur) = 0;
};
