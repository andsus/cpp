#include "space_age.h"

namespace {
    double mercury = 0.2408467;
    double venus =   0.61519726;
    double mars =    1.8808158;
    double jupiter = 11.862615;
    double saturn =  29.447498;
    double uranus =  84.016846;
    double neptune = 164.79132;
}

namespace space_age {
 space_age::space_age(unsigned long seconds) : secs(seconds) {
        on_mercury = func(mercury);
        on_venus = func(venus);
        on_mars = func(mars);
        on_jupiter = func(jupiter);
        on_saturn = func(saturn);
        on_uranus = func(uranus);
        on_neptune = func(neptune);
    }

    call_back_func space_age::func(double multiplier) {
        return [multiplier, this](){return on_earth() / multiplier;};
    }

    unsigned long space_age::seconds() const {
        return secs;
    }

    double space_age::on_earth() const {
        return static_cast<double>(secs) / 31557600u;
    }
}  // namespace space_age
