/*
* Programme TD4 du cours INF1015
* \auteurs Salma Zaghloul et Adam El Zein
* \date 6 juin 2023
* \Cr�� le 31 mai 2023
*/

#pragma once
#include <string>
#include "Affichable.h"

using namespace std;

class Personnage : public Affichable
{
public:
    Personnage() : nom_("Inconnu"), titreJeu_("Inconnu") {}
    Personnage(const string& nom, const string& titreJeu) { nom_ = nom; titreJeu_ = titreJeu; }

    // M�thode d'affichage pour afficher le nom et le titre du jeu du personnage
    void afficher(ostream& os) const override;

    // M�thode pour changer la couleur de l'affichage (utilisant le param�tre couleur)
    void changerCouleur(ostream& os, int couleur) override;

    // M�thodes d'acc�s pour obtenir le nom et le titre du jeu du personnage
    string getNom() const;
    string getTitreJeu() const;

private:
    string nom_;
    string titreJeu_;
};
