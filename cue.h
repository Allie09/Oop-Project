#ifndef CUE_H
#define CUE_H

#include "texture.h"

class Cue {
    Texture t;
    double posX, posY;
    double degrees;
    SDL_Point center;

public:
    Cue();

    void render();

    void setPos(double x, double y);
    void setDeg(double angle);
    void setX(double x);

    double getHeight() const {return t.getHeight();}
    double getWidth() const {return t.getWidth();}
    double getAngle() const {return degrees;}
    double getX() const {return posX;}
    double getY() const {return posY;}
};

#endif // CUE_H
