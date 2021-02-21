#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <functional>

#define EXERCISM_RUN_ALL_TESTS

namespace space_age {
    using call_back_func = std::function<double ()>;
    class space_age {
        unsigned long secs;
        call_back_func func(double multiplier);
        public:
            space_age(unsigned long seconds);
            unsigned long seconds() const;
            double on_earth() const;
            call_back_func on_neptune;
            call_back_func on_uranus;
            call_back_func on_venus;
            call_back_func on_mercury;
            call_back_func on_mars;
            call_back_func on_jupiter;
            call_back_func on_saturn;

    };

}  // namespace space_age

#endif // SPACE_AGE_H