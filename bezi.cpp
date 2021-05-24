#include "bezi.h"

Bezi::Bezi()
{

}

void Bezi::Pressed(Punkt p)
{
    if (set) {
        std::array<double, 4> r = {
            pow(p.x - punkty[0].x, 2) + pow(p.y - punkty[0].y, 2),
            pow(p.x - punkty[1].x, 2) + pow(p.y - punkty[1].y, 2),
            pow(p.x - punkty[2].x, 2) + pow(p.y - punkty[2].y, 2),
            pow(p.x - punkty[3].x, 2) + pow(p.y - punkty[3].y, 2)
        };
        zaznaczonyIndex = std::distance(r.begin(), std::min_element(r.begin(), r.end()));
        
    }
    else {
        set = true;
        punkty[0] = p;
        punkty[1] = { 100, 100 };
        punkty[2] = { 150, 100 };
        punkty[3] = { 200, 100 };
    }
}

void Bezi::Released(Punkt p)
{
    Moved(p);
}

void Bezi::Moved(Punkt p) 
{
    punkty[zaznaczonyIndex] = p;
}

void Bezi::Rysuj(uchar * bits, int szer, int wys, bool debug)
{
    Linia linia;
    if (debug) {
        // rysowanie punktow
        for (int i = 0; i < 4; i++) {
            Okrag okr;
            okr.DodajPocz(punkty[i]);
            okr.DodajKon(punkty[i] + Punkt{10, 10});
            okr.Rysuj(bits, szer, wys);
        }
        // rysowanie linii pomiedzy oczkami
        linia.DodajPocz(punkty[0]);
        linia.DodajKon(punkty[1]);
        linia.Rysuj(bits, szer, wys, 50, 50, 50);
        linia.DodajPocz(punkty[2]);
        linia.DodajKon(punkty[3]);
        linia.Rysuj(bits, szer, wys, 50, 50, 50);
    }
    // rysowanie beziego
    int dokladnosc = 200;
    float t = 0.f, tt = 1.f / dokladnosc;
    bool nowy = true;
    Punkt ostatni;

    for (int i = 0; i < dokladnosc; i++) {
        float x = pow(1 - t, 3) * punkty[0].x;
        x += 3 * pow(1 - t, 2) * t * punkty[1].x;
        x += 3 * pow(1 - t, 1) * pow(t, 2) * punkty[2].x;
        x += pow(t, 3) * punkty[3].x;
 
        float y = pow(1 - t, 3) * punkty[0].y;
        y += 3 * pow(1 - t, 2) * t * punkty[1].y;
        y += 3 * pow(1-t, 1) * pow(t, 2) * punkty[2].y;
        y += pow(t, 3) * punkty[3].y;
 
        t += tt;

        if (x * y * 4 >= szer * wys * 4)
            continue;

        if (nowy) {
            linia.DodajPocz(Punkt(x, y));
            nowy = false;
        }
        else {
            linia.DodajKon(Punkt{x, y});
            linia.Rysuj(bits, szer, wys);
            linia.DodajPocz(Punkt{x, y});
        }
    }

}
