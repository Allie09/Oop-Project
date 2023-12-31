#ifndef COLLISIONOBSERVER_H
#define COLLISIONOBSERVER_H

#include "observer.h"

#include <utility>
#include <SDL.h>

class Ball;
class Rect;

class CollisionObserver : public Observer {
public:
    CollisionObserver();

    virtual void onNotify(Unit& entity, Event event) override;
private:

    double distanceSquared(double x1, double y1, double x2, double y2);
    bool collided(Ball* b, Ball* b2);
    bool collided(Ball* b, Rect* r);
    void checkCollisions(Ball* b);
    std::pair<int,int> find_closer(Ball* b, Rect* rec);

    void fix(Ball* b, Rect* rec);
    void fix(Ball* b, Ball* b2);
};

#endif // COLLISIONOBSERVER_H
