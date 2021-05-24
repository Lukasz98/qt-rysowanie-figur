#ifndef OKRAG_H
#define OKRAG_H

#include <iostream>
#include <algorithm>
#include <cmath>
#include "punkt.h"

class Okrag
{

    Punkt p1, p2;


public:
    Okrag();

    void DodajPocz(Punkt p);

    void DodajKon(Punkt p);

    void Rysuj(unsigned char * ptr, int w, int h);

};

#endif // LINIA_H
