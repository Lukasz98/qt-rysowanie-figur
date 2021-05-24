#include "linia.h"

Linia::Linia()
{

}

void Linia::DodajPocz(Punkt p)
{
    p1 = p;
}

void Linia::DodajKon(Punkt p)
{
    p2 = p;
}

void Linia::Rysuj(unsigned char * ptr, int  w, int h, int colorB, int colorG, int colorR)
{
    if (p1.x <= 0) p1.x = 1;
    if (p2.x <= 0) p2.x = 1;
    if (p1.y <= 0) p1.y = 1;
    if (p2.y <= 0) p2.y = 1;
    
    float xx1 = p1.x, xx2 = p2.x, yy1 = p1.y, yy2 = p2.y;
    if (xx1 > xx2) {
        std::swap(xx1, xx2);
        std::swap(yy1, yy2);
    }


    float a  = (yy1 - yy2) / (xx1 - xx2);
    if (xx1 == xx2) {
        if (yy1 > yy2) {
            std::swap(xx1, xx2);
            std::swap(yy1, yy2);
        }
        for (int y = yy1; y < yy2 && y < h; y++) {
            int x = xx1;
            if (x >= w || x < 0 || y < 0 )
                continue;
            ptr[w*4*y + 4*x] = colorB;
            ptr[w*4*y + 4*x + 1] = colorG;
            ptr[w*4*y + 4*x + 2] = colorR;
        }
    }
    else if (a < 1 && a > -1) {
        float b = p1.y - a * p1.x;

        for (int x = xx1; x < xx2 && x < w; x++) {
            int y = a * x + b;
            if (y >= h || y < 0 || x < 0)
                continue;
            ptr[w*4*y + 4*x] = colorB;
            ptr[w*4*y + 4*x + 1] = colorG;
            ptr[w*4*y + 4*x + 2] = colorR;
        }
    }
    else {
        if (yy1 > yy2) {
            std::swap(xx1, xx2);
            std::swap(yy1, yy2);
        }
        a = (yy1 - yy2) / (xx1 - xx2);
        float b = yy1 - a * xx1;
        for (int y = yy1; y < yy2 && y < h; y++) {
            int x = (y - b) / a;
            if (x >= w || x < 0 || y < 0)
                continue;
            ptr[w*4*y + 4*x] = colorB;
            ptr[w*4*y + 4*x + 1] = colorG;
            ptr[w*4*y + 4*x + 2] = colorR;
        }
    }
}
