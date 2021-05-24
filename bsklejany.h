#ifndef BSKLEJANY_H
#define BSKLEJANY_H

#include <vector>
#include <QImage>
#include "punkt.h"
#include "linia.h"
#include "okrag.h"

class BSklejany
{
    std::vector<Punkt> punkty;
    int zaznaczonyIndex = 0;
    bool set = false;

    int znajdzPunkt(Punkt p);

public:
    BSklejany();

    void Pressed(Punkt p);
    void Released(Punkt p);
    void Moved(Punkt p);

    void Rysuj(uchar * bits, int szer, int wys, bool debug);

    void DodajPkt(Punkt p);
    bool UsunPkt(Punkt p);
};

#endif // BSKLEJANY_H
