#include "leap.h"

namespace leap {
    
    // bool is_div_by_4(int year) {
    //     return (year % 4 == 0);
    // }
    // bool is_div_by_100(int year) {
    //     return (year % 100 == 0);
    // }
    // bool is_div_by_400(int year) {
    //     return (year % 400 == 0);
    // }
    bool is_leap_year (int year) {
        auto divisible_by = [year](int divisor) { return year % divisor == 0; };
        return divisible_by(4) and 
            (not divisible_by(100) or divisible_by(400) );
    }



}  // namespace leap
