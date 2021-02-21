#if !defined(GRAINS_H)
#define GRAINS_H

namespace grains {
    unsigned long long int square(int _square);
    constexpr unsigned long long int total() {
        // int total = 0ULL;
		// for (int i = 1; i <= 64; i++) {
		// 	total += square(i);
		// }
		// return total;


        unsigned long long bitwise_shifter = 1ULL, result = 1ULL;

        for (int i = 1; i < 64; ++i) {
            result += bitwise_shifter <<= 1;
        }
        return result;
    }
}  // namespace grains

#endif // GRAINS_H