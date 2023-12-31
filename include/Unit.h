#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include <vector>

struct MovementData {
    double speed_x;
    double speed_y;
    double accel_x;
    double accel_y;
};

class Unit {
    std::vector<Observer*> observers_;
public:
    Unit();
    virtual ~Unit() noexcept;
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notify(Event event);

    virtual void render() = 0;
    virtual void move() = 0;
};

#endif // SUBJECT_H
