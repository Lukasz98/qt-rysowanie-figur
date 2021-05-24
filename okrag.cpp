#include "okrag.h"

Okrag::Okrag()
{

}

void Okrag::DodajPocz(Punkt p)
{
    p1 = p;
}

void Okrag::DodajKon(Punkt p)
{
    p2 = p;
}

void Okrag::Rysuj(unsigned char * ptr, int  w, int h)
{
    float r = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    for (int x = 0; x < (int)(r / sqrt(2) + 0.5f); x++) {
        int y = (int)(sqrt(r*r - x*x) + 0.5f);

        if (x < 0 || x > w || y < 0 || y > h)
            continue;

        int index = w*4*(y+p1.y) + 4*(x+p1.x);
        if (index >= 0 && index < w * 4 * h)
            ptr[index] = 255;

        index = w*4*(x+p1.y) + 4*(y+p1.x);
        if (index >= 0 && index < w * 4 * h)
            ptr[index] = 255;

        index = w*4*(x+p1.y) + 4*(-y+p1.x);
        if (index >= 0 && index < w * 4 * h)
            ptr[index] = 255;

        index = w*4*(-y+p1.y) + 4*(x+p1.x);
        if (index >= 0 && index < w * 4 * h)
            ptr[index] = 255;

        index = w*4*(-y+p1.y) + 4*(-x+p1.x);
        if (index >= 0 && index < w * 4 * h)
            ptr[index] = 255;

        index = w*4*(-x+p1.y) + 4*(-y+p1.x);
        if (index >= 0 && index < w * 4 * h)
            ptr[index] = 255;

        index = w*4*(-x+p1.y) + 4*(y+p1.x);
        if (index >= 0 && index < w * 4 * h)
            ptr[index] = 255;

        index = w*4*(y+p1.y) + 4*(-x+p1.x);
        if (index >= 0 && index < w * 4 * h)
            ptr[index] = 255;


    }
}
