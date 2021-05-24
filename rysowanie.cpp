#include "rysowanie.h"

Rysowanie::Rysowanie(int szer, int wys, uchar * bits)
    :szer(szer), wys(wys), bits(bits)
{
    for (int i = 0; i < szer * wys * 4; i++) {
        bits_cp.push_back(bits[i]);
   }
}

void Rysowanie::ZmienTyp(TypRysowania typ)
{
    if (this->typ == TypRysowania::BEZI)
        ZapiszBeziego();
    else if (this->typ == TypRysowania::BSKLEJANY)
        ZapiszBSklejanego();
    this->typ = typ;
    rozpoczeto = false;
}

void Rysowanie::Pressed(Punkt p)
{
    rozpoczeto = true;
    if (typ != TypRysowania::BEZI && typ != TypRysowania::BSKLEJANY)
        nowaKopia();

   switch (typ) {
        case TypRysowania::LINIA:
            linia.DodajPocz(p);
            break;
        case TypRysowania::OKRAG:
            okrag.DodajPocz(p);
            break;
        case TypRysowania::ELIPSA:
            elipsa.DodajPocz(p);
            break;
        case TypRysowania::BEZI:
            bezi.Pressed(p);
            bezi.Rysuj(bits, szer, wys, true);
            break;
        case TypRysowania::BSKLEJANY:
            sklejka.Pressed(p);
            sklejka.Rysuj(bits, szer, wys, true);
            break;
    }
}

void Rysowanie::Released(Punkt p)
{
    wczytajKopie();
    
    switch (typ) {
        case TypRysowania::LINIA:
            linia.DodajKon(p);
            linia.Rysuj(bits, szer, wys);
            break;
        case TypRysowania::OKRAG:
            okrag.DodajKon(p);
            okrag.Rysuj(bits, szer, wys);
            break;
        case TypRysowania::ELIPSA:
            elipsa.DodajKon(p);
            elipsa.Rysuj(bits, szer, wys, punktyWElipsie);
            break;
        case TypRysowania::BEZI:
            bezi.Released(p);
            bezi.Rysuj(bits, szer, wys, true);
            break;
        case TypRysowania::BSKLEJANY:
            sklejka.Released(p);
            sklejka.Rysuj(bits, szer, wys, true);
            break;
    }
}

void Rysowanie::Moved(Punkt p)
{
    switch (typ) {
        case TypRysowania::BEZI:
            wczytajKopie();
            bezi.Moved(p);
            bezi.Rysuj(bits, szer, wys, true);
            break;
        case TypRysowania::BSKLEJANY:
            wczytajKopie();
            sklejka.Moved(p);
            sklejka.Rysuj(bits, szer, wys, true);
            break;
        default:
            Released(p);
            break;
    }

}

void Rysowanie::ZapiszBeziego()
{
    if (typ != TypRysowania::BEZI)
        return;
    wczytajKopie();
    bezi.Rysuj(bits, szer, wys, false);
    nowaKopia();
    bezi = Bezi{};
}

void Rysowanie::wczytajKopie()
{
    for (int i = 0; i < szer * wys * 4; i++)
        bits[i] = bits_cp[i]; 
}

void Rysowanie::nowaKopia()
{
    for (int i = 0; i < szer * wys * 4; i++) {
        bits_cp[i] = bits[i];
    }
}

void Rysowanie::PunktyWElipsie(int pwe)
{
    punktyWElipsie = pwe;
}

void Rysowanie::ZapiszBSklejanego() 
{
    if (typ != TypRysowania::BSKLEJANY)
        return;
    wczytajKopie();
    sklejka.Rysuj(bits, szer, wys, false);
    nowaKopia();
    sklejka = BSklejany{};
}   

void Rysowanie::DodajDoBSklejanego()
{
    if (typ != TypRysowania::BSKLEJANY)
        return;
    sklejka.DodajPkt(Punkt{100, 100});
    sklejka.Rysuj(bits, szer, wys, true);
}

void Rysowanie::UsunZBSklejanego(Punkt p)
{
    if (typ != TypRysowania::BSKLEJANY)
        return;
    if (sklejka.UsunPkt(p)) {
        wczytajKopie();
        sklejka.Rysuj(bits, szer, wys, true);
    }
}
