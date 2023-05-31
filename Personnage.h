/*
* Programme TD4 du cours INF1015
* \auteurs Salma Zaghloul et Adam El Zein
* \date 6 juin 2023
* \Créé le 31 mai 2023
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

    // Méthode d'affichage pour afficher le nom et le titre du jeu du personnage
    void afficher(ostream& os) const override;

    // Méthode pour changer la couleur de l'affichage (utilisant le paramètre couleur)
    void changerCouleur(ostream& os, int couleur) override;

    // Méthodes d'accès pour obtenir le nom et le titre du jeu du personnage
    string getNom() const;
    string getTitreJeu() const;

private:
    string nom_;
    string titreJeu_;
};
