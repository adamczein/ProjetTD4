/*
 * Programme TD4 du cours INF1015
 * \auteurs Salma Zaghloul et Adam El Zein
 * \date 6 juin 2023
 * \Cr�� le 31 mai 2023
 */

#include "Vilain.h"

 // M�thode d'affichage pour afficher le nom, le titre du jeu, et l'objectif du vilain
void Vilain::afficher(ostream& os) const {
    Personnage::afficher(os);  // Appel � la m�thode afficher de la classe de base pour afficher le nom et le titre du jeu
    os << "Objectif: " << objectif_ << endl;  // Affichage de l'objectif du vilain
}

// M�thode d'acc�s pour obtenir l'objectif du vilain
string Vilain::getObjectif() const { return objectif_; }
