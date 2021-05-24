#include "bsklejany.h"

BSklejany::BSklejany()
{

}

int BSklejany::znajdzPunkt(Punkt p)
{
    auto pkt = punkty.begin();
    float d = 100000.0f;
    for (auto it = punkty.begin(); it < punkty.end(); it++) { 
        float dd = pow(p.x - it->x, 2) + pow(p.y - it->y, 2);
        if (dd < d) {
            d = dd;
            pkt = it;
        }
    }
    return pkt - punkty.begin();
}

void BSklejany::Pressed(Punkt p)
{
    if (set) {
        zaznaczonyIndex = znajdzPunkt(p);
    }
    else {
        set = true;
        punkty.push_back(p);
        punkty.push_back({ 100, 100 });
        punkty.push_back({ 150, 100 });
        punkty.push_back({ 200, 100 });
    }
}

void BSklejany::Released(Punkt p)
{
    Moved(p);
}

void BSklejany::Moved(Punkt p) 
{
    punkty[zaznaczonyIndex] = p;
}

void BSklejany::Rysuj(uchar * bits, int szer, int wys, bool debug)
{
    Linia linia;
    if (debug) {
        for (auto p : punkty) {
            Okrag okr;
            okr.DodajPocz(p);
            okr.DodajKon(p + Punkt{10, 10});
            okr.Rysuj(bits, szer, wys);
        }
    }

    int dokladnosc = 1000;
    float t = 0.f, tt = 1.f / dokladnosc;
    bool nowy = true;
    Punkt ostatni;

    for (auto it = punkty.begin() + 1; it < punkty.end(); it++) {
        if (it + 1 == punkty.end() || it + 2 == punkty.end())
            break;
        for (int i = 0; i < dokladnosc; i++) {
            float x = (-1*pow(t, 3) + 3*pow(t, 2) - 3*t + 1) / 6 * (it - 1)->x;
            x += (3*pow(t, 3) - 6*pow(t, 2) + 4) / 6 * it->x;
            x += (-3*pow(t, 3) + 3*pow(t, 2) + 3*t + 1) / 6 * (it + 1)->x;
            x += (pow(t, 3) / 6 * (it + 2)->x);
            
            float y = (-1*pow(t, 3) + 3*pow(t, 2) - 3*t + 1) / 6 * (it - 1)->y;
            y += (3*pow(t, 3) - 6*pow(t, 2) + 4) / 6 * it->y;
            y += (-3*pow(t, 3) + 3*pow(t, 2) + 3*t + 1) / 6 * (it + 1)->y;
            y += (pow(t, 3) / 6 * (it + 2)->y);

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
        t = 0.0f;
    }
}

void BSklejany::DodajPkt(Punkt p)
{
    punkty.push_back(p);
}

bool BSklejany::UsunPkt(Punkt p)
{
    if (punkty.size() > 4) {
        int index = znajdzPunkt(p);
        punkty.erase(punkty.begin() + index);
        return true;
    }
    return false;
}
