#include "space_age.h"


namespace space_age {
    double space_age::on_mercury() const {
        return seconds_to_years(mercury_year_in_earth_years);
    }
    double space_age::on_venus() const {
        return seconds_to_years(venus_year_in_earth_years);
    }
    double space_age::on_mars() const {
        return seconds_to_years(mars_year_in_earth_years);
    }   
    double space_age::on_jupiter() const {
        return seconds_to_years(jupiter_year_in_earth_years);
    }
    double space_age::on_saturn() const {
        return seconds_to_years(saturn_year_in_earth_years);
    }
    double space_age::on_uranus() const {
        return seconds_to_years(uranus_year_in_earth_years);
    }
    double space_age::on_neptune() const {
        return seconds_to_years(neptune_year_in_earth_years);
    }
    
    double space_age::seconds_to_years(const double year_factor) const {
        return _seconds / 60.0 / 60.0 / 24.0 / 365.25 / year_factor;
    }

    double space_age::on_earth() const {
        return seconds_to_years(earth_year_in_earth_years) ;
    }
}  // namespace space_age
