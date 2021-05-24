#ifndef PUNKT_H
#define PUNKT_H


struct Punkt {
    int x, y;
    Punkt() : x(1), y(1) {}
    Punkt(int x, int y) : x(x), y(y) {}
    Punkt(float x, float y) {
        this->x = (int)(x + 0.5f);
        this->y = (int)(y + 0.5f);
    }

    Punkt operator+(Punkt o) {
        o.x += x;
        o.y += y;
        return o;
    }
};



#endif // PUNKT_H
