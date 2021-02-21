#include "triangle.h"
#include <stdexcept>

namespace triangle {
    bool is_all_above_zero(double s1, double s2, double s3) {
        return s1 > 0 && s2 > 0 && s3 > 0; 
    }
    bool is_valid_triangle(double s1,double s2,double s3) {
        return is_all_above_zero(s1,s2,s3) && (2 * std::max({s1, s2, s3})  < s1 + s2 + s3);
    }
    
    bool is_equilateral(double s1, double s2, double s3) {
        return s1 == s2 && s2 == s3;
    }

    bool is_isosceles(double s1, double s2, double s3) {
        return s1 == s2 || s2 == s3 || s1 == s3;
    }

    bool is_scalene(double s1, double s2, double s3) {
        return !is_equilateral(s1,s2,s3) &&
            !is_isosceles(s1,s2,s3);
    }
    flavor kind(double s1, double s2, double s3) {
        if (!is_valid_triangle(s1,s2,s3)) throw std::domain_error("triangle is not valid");
        if (is_equilateral(s1,s2,s3)) return flavor::equilateral;
        if (is_isosceles(s1,s2,s3)) return flavor::isosceles;
        //if (is_scalene(s1,s2,s3)) return flavor::scalene;
        return flavor::scalene;   
    }

    

}  // namespace triangle
