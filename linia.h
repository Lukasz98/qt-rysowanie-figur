#ifndef LINIA_H
#define LINIA_H
#include <algorithm>
#include "punkt.h"

class Linia
{
    Punkt p1, p2;

public:
    Linia();

    void DodajPocz(Punkt p);

    void DodajKon(Punkt p);

    void Rysuj(unsigned char * ptr, int w, int h, int colorB = 255, int colorG = 0, int colorR = 255);

};



#endif // LINIA_H
