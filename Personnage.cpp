/*
* Programme TD4 du cours INF1015
* \auteurs Salma Zaghloul et Adam El Zein
* \date 6 juin 2023
* \Créé le 31 mai 2023
*/

#include "Personnage.h"

// Méthode d'affichage pour afficher le nom et le jeu de parution du jeu du personnage
void Personnage::afficher(ostream& os) const {
    os << "Nom: " << nom_ << endl << "Parution: " << titreJeu_ << endl;
}

// Méthode pour changer la couleur de l'affichage (utilisant le paramètre couleur)
void Personnage::changerCouleur(ostream& os, int couleur) {
    os << "\033[" << couleur << "m";
}

// Méthodes d'accès pour obtenir le nom et le titre du jeu du personnage
string Personnage:: getNom() const { return nom_; }
string Personnage:: getTitreJeu() const { return titreJeu_; }