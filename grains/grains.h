#if !defined(GRAINS_H)
#define GRAINS_H
#include <stdexcept>

namespace grains {
    constexpr unsigned long long int square(int _square) {
		if (_square < 1 || _square>64) {
			throw std::out_of_range("Square must be between 1 and 64");
		}

        unsigned long long bitwise_shifter = 1ULL;
        return bitwise_shifter << (_square - 1);
	}
    constexpr unsigned long long int total() {
         unsigned long long int total = 0ULL;
		 for (int i = 1; i <= 64; i++) {
		 	total += square(i);
		 }

		 return total;
    }
} 

#endif // GRAINS_H