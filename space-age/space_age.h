#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H


#define EXERCISM_RUN_ALL_TESTS

namespace space_age {

    class space_age {
        private:
            // declared as static 
            static constexpr double earth_year_in_earth_years = 1.0;
            static constexpr double mercury_year_in_earth_years = 0.2408467;
            static constexpr double venus_year_in_earth_years = 0.61519726;
            static constexpr double mars_year_in_earth_years = 1.8808158;
            static constexpr double jupiter_year_in_earth_years = 11.8626158;
            static constexpr double saturn_year_in_earth_years = 29.447498;
            static constexpr double uranus_year_in_earth_years = 84.016846;
            static constexpr double neptune_year_in_earth_years = 164.79132;
            long long _seconds;
            double seconds_to_years(double year_factor) const;
        public:
            explicit space_age(const long long seconds) 
                    :  _seconds(seconds) {}
                    
            long long seconds() const { return _seconds; }
            double  on_earth() const;
            double  on_neptune() const;
            double  on_uranus() const;
            double  on_venus() const;
            double  on_mercury() const;
            double  on_mars() const;
            double  on_jupiter() const;
            double  on_saturn() const;

    };

}  // namespace space_age

#endif // SPACE_AGE_H