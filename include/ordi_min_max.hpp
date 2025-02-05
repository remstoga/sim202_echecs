#ifndef ORDI_MIN_MAX_HPP
#define ORDI_MIN_MAX_HPP

#include <iostream>
#include "environnement.hpp"
#include "pour_jouer.hpp"

#define inf 1000000

////
// POSITION
////

class Position
{
public:
    Echiquier plateauRef;
    ListeCoups coupsPrecedents;
    int valeurPosition = 0; // attribut, à iniialiser avec valeurPosition()
    Position *soeur;
    Position *fille;
    bool joueur; // qui a joué le prochain coup =is white ?
    int num_tour_de_jeu;

    Position(Echiquier &plateau, ListeCoups &coups, Position *positionSoeur, Position *positionFille, bool joueurCoup, int num_tour);
    bool estGagnante();
    int calculeValeurPosition();
    void generateur(int profondeur);
    ~Position();
};

#endif
