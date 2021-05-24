#ifndef RYSOWANIE_H
#define RYSOWANIE_H

#include <vector>
#include <QImage>
#include "elipsa.h"
#include "okrag.h"
#include "linia.h"
#include "bezi.h"
#include "bsklejany.h"

enum class TypRysowania { LINIA = 0, OKRAG = 1, ELIPSA = 2, BEZI = 3, BSKLEJANY = 4 };

class Rysowanie
{
    TypRysowania typ = TypRysowania::LINIA;
    bool rozpoczeto = false;

    int wys, szer;
    uchar * bits;
    std::vector<uchar> bits_cp;

    int punktyWElipsie = 4;

    Linia linia;
    Okrag okrag;
    Elipsa elipsa;
    Bezi bezi;
    BSklejany sklejka;

    void nowaKopia();
    void wczytajKopie();

public:
    Rysowanie(int szer, int wys, uchar * bits);

    void Pressed(Punkt p);
    void Moved(Punkt p);
    void Released(Punkt p);

    void ZmienTyp(TypRysowania typ);
    void DodajPunktPocz(Punkt p);
    void DodajPunktKon(Punkt p, bool ostateczny = false);
    void PunktyWElipsie(int pwe);
    void ZapiszBeziego();
    void ZapiszBSklejanego();
    void DodajDoBSklejanego();
    void UsunZBSklejanego(Punkt p);

    inline bool CzyRozpoczeto() { return rozpoczeto; }

};

#endif // RYSOWANIE_H
