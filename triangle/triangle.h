#if !defined(TRIANGLE_H)
#define TRIANGLE_H
#include <algorithm>

namespace triangle {
    enum class flavor {
        equilateral, isosceles, scalene
    };
    flavor kind(double side1, double side2, double s3);


}  // namespace triangle

#endif // TRIANGLE_H