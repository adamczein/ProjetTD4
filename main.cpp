/*
* Programme TD4 du cours INF1015
* \auteurs Salma Zaghloul et Adam El Zein
* \date 6 juin 2023
* \Créé le 31 mai 2023
*/



#pragma once
#include <fstream>
#include "bibliotheque_cours.hpp"
#include "Affichable.h"
#include "Personnage.h"
#include "Heros.h"
#include "Vilain.h"
#include "VilainHeros.h"
#include <memory>
#include <iostream>
#include <string>
#include <vector>



using UInt8 = uint8_t;
using UInt16 = uint16_t;



// Fonction pour lire un UInt8 à partir d'un fichier
UInt8 lireUint8(std::istream& fichier)
{
    UInt8 valeur = 0;
    fichier.read(reinterpret_cast<char*>(&valeur), sizeof(valeur));
    return valeur;
}



// Fonction pour lire un UInt16 à partir d'un fichier
UInt16 lireUint16(std::istream& fichier)
{
    UInt16 valeur = 0;
    fichier.read(reinterpret_cast<char*>(&valeur), sizeof(valeur));
    return valeur;
}



// Fonction pour lire une chaîne de caractères à partir d'un fichier
std::string lireString(std::istream& fichier)
{
    std::string texte;
    texte.resize(lireUint16(fichier));
    fichier.read(reinterpret_cast<char*>(&texte[0]), std::streamsize(sizeof(texte[0])) * texte.length());
    return texte;
}



using namespace std;



int main()
{
#pragma region "Bibliothèque du cours"
    // Permet sous Windows les "ANSI escape code" pour changer de couleur
    // https://en.wikipedia.org/wiki/ANSI_escape_code ; les consoles Linux/Mac
    // les supportent normalement par défaut.
    bibliotheque_cours::activerCouleursAnsi();
#pragma endregion



    // Trait de separation
    static const string trait =
        "═════════════════════════════════════════════════════════════════════════";



    // Ouverture des fichiers binaires
    ifstream fichierHeros("heros.bin", ios::binary);
    ifstream fichierVilains("vilains.bin", ios::binary);
    fichierHeros.exceptions(ios::failbit);
    fichierVilains.exceptions(ios::failbit);



    //TODO: Votre code pour le main commence ici



    vector<Heros> heros;
    vector<Vilain> vilains;
    vector<Personnage> personnages;
    vector<vector<string>> allies;




    int herosALire = lireUint16(fichierHeros);
    for (int i = 0; i < herosALire; i++) {
        string nomTemp = lireString(fichierHeros);
        string jeauTemp = lireString(fichierHeros);
        string ennemiTemp = lireString(fichierHeros);
        int nbrTemporary = lireUint8(fichierHeros);



        vector<string> alliesTemp;
        for (int j = 0; j < nbrTemporary; j++) {
            alliesTemp.push_back(lireString(fichierHeros));
        }
        allies.push_back(alliesTemp);
        alliesTemp.clear();
        heros.push_back(Heros(nomTemp, jeauTemp, ennemiTemp, allies[i]));
    }




    int vilainsALire = lireUint16(fichierVilains);
    for (int i = 0; i < vilainsALire; i++) {
        string nomVilTemp = lireString(fichierVilains);
        string jeauVilTemp = lireString(fichierVilains);
        string objectif = lireString(fichierVilains);
        vilains.push_back(Vilain(nomVilTemp, jeauVilTemp, objectif));
    }



    // Affichage des héros
    cout << "\033[32m----- Heros -----\033[0m" << endl;  // Utilise le code ANSI pour la couleur verte (32)
    for (int k = 0; k < heros.size(); k++) {
        heros[k].changerCouleur(cout, 92);
        heros[k].afficher(cout);
        cout << endl;
    }



    cout << "------------------------------------------------------------------------------------------" << endl;



    // Affichage des vilains
    cout << "\033[31m----- Vilain -----\033[0m" << endl;  // Utilise le code ANSI pour la couleur rouge (31)
    for (int k = 0; k < heros.size(); k++) {
        vilains[k].changerCouleur(cout, 91);
        vilains[k].afficher(cout);
        cout << endl;
    }



    for (int f = 0; f < heros.size(); f++) {
        personnages.push_back(heros[f]);
        personnages.push_back(vilains[f]);
    }



    cout << "------------------------------------------------------------------------------------------" << endl;



    // Affichage des personnages (objets de la classe Personnage)
    cout << "\033[37m----- Personnage -----\033[0m" << endl;  // Utilise le code ANSI pour la couleur blanche (37)
    for (int l = 0; l < personnages.size(); l++) {
        personnages[l].changerCouleur(cout, 0);
        personnages[l].afficher(cout);
        cout << endl;
    }



    cout << "------------------------------------------------------------------------------------------" << endl;



    // Création et affichage de l'objet VilainHeros
    cout << "\033[90m----- VilainHeros -----\033[0m" << endl;  // Utilise le code ANSI pour la couleur gris (90)
    VilainHeros perso(heros[4], vilains[1]);
    perso.changerCouleur(cout, 90);
    perso.afficher(cout);
    personnages.push_back(perso);



    cout << "------------------------------------------------------------------------------------------" << endl;



    return 0;
}
