#include "elipsa.h"

Elipsa::Elipsa()
{

}

void Elipsa::DodajPocz(Punkt p)
{
    p1 = p;
}

void Elipsa::DodajKon(Punkt p)
{
    p2 = p;
}

void Elipsa::Rysuj(unsigned char * ptr, int  w, int h, int wierzcholki)
{
#define M_PI           3.14159265358979323846

    float lastX = 0, lastY = 0;
    float firstX = 0, firstY = 0;
    Linia linia;
    float alfa = M_PI * 1 / 5;

    float a = p1.x - p2.x;
    float b = p1.y - p2.y;

    for (int i = 1; i <= wierzcholki; i++) {
        float x = a * cos(alfa);
        float y = b * sin(alfa);
        alfa += M_PI / (wierzcholki / 2);

        if (i == 1) {
            lastX = x+p1.x;
            lastY = y+p1.y;
            firstX = lastX;
            firstY = lastY;
        }
        else {
            linia.DodajPocz(Punkt{lastX, lastY});
            linia.DodajKon(Punkt{x+p1.x, y+p1.y});
            linia.Rysuj(ptr, w, h);
            lastX = x+p1.x;
            lastY = y+p1.y;
        }
    }
    linia.DodajPocz(Punkt{lastX, lastY});
    linia.DodajKon(Punkt{firstX, firstY});
    linia.Rysuj(ptr, w, h);
}

