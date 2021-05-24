#ifndef ELIPSA_H
#define ELIPSA_H

#include <cmath>
#include "linia.h"
#include "punkt.h"

class Elipsa
{
public:

    Punkt p1, p2;


public:
    Elipsa();
    
    void DodajPocz(Punkt p);

    void DodajKon(Punkt p);

    void Rysuj(unsigned char * ptr, int w, int h, int wierzcholki);

};

#endif // ELIPSA_H
