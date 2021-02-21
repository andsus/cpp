#include "reverse_string.h"

#include <string>
#include <iterator>

namespace reverse_string {
    
    string reverse_string(const string  &input) {
        return string(input.rbegin(), input.rend());
    }

}  // namespace reverse_string
