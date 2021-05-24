#ifndef BEZI_H
#define BEZI_H

#include <math.h>
#include <array>
#include <algorithm>
#include <QImage>
#include "punkt.h"
#include "linia.h"
#include "okrag.h"

class Bezi
{
    std::array<Punkt, 4> punkty;
    int zaznaczonyIndex = 0;

    bool set = false;

public:
    Bezi();


    void Pressed(Punkt p);
    void Released(Punkt p);
    void Moved(Punkt p);

    void Rysuj(uchar * bits, int szer, int wys, bool debug);

};

#endif // BEZI_H
