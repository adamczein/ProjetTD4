/*
* Programme TD4 du cours INF1015
* \auteurs Salma Zaghloul et Adam El Zein
* \date 6 juin 2023
* \Cr�� le 31 mai 2023
*/

#pragma once
#include "Heros.h"
#include "Vilain.h"
#include "Personnage.h"

class VilainHeros : public virtual Heros, public virtual Vilain
{
public:
    // Constructeur prenant un objet Heros et un objet Vilain
    VilainHeros(const Heros& heros, const Vilain& vilain)
        : Personnage(heros.getNom() + "-" + vilain.getNom(), heros.getJeu() + "-" + vilain.getJeu()),
        Heros("", "", heros.getEnnemi(), heros.getAllies()),
        Vilain("", "", vilain.getObjectif())
    {
        mission_ = vilain.getObjectif() + " dans le monde de " + heros.getJeu();
    }

    // M�thode d'affichage pour afficher les informations du VilainHeros
    void afficher(ostream& os, const Heros& heros) const override;

    // M�thode d'acc�s pour obtenir la liste des alli�s du h�ros
    vector<string> getAllies() const { return Heros::getAllies(); }

private:
    string mission_;
};





