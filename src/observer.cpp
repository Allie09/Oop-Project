#include "observer.h"
#include "Unit.h"

#include <algorithm>

Observer::Observer()
    : observed_{} {}

Observer::~Observer() noexcept
{
    for (Unit* sub: observed_)
        sub->removeObserver(this);
}

void Observer::registerSub(Unit* s)
{
    bool found = std::find(std::begin(observed_), std::end(observed_), s) != std::end(observed_);

    if (!found) {observed_.push_back(s);}
}

void Observer::unregisterSub(Unit* s)
{
    auto it = std::find(std::begin(observed_), std::end(observed_), s);

    if (it != std::end(observed_)) {observed_.erase(it);}
}
