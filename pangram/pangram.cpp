#include "pangram.h"
#include <unordered_set>
// ensure ::isalpha and ::tolower is available
#include <ctype.h> 

namespace pangram {

    using std::unordered_set;
  
    bool is_pangram(const std::string &input) {
        
        unordered_set<char> letters;
        for (char c: input) {
             if (::isalpha(c)) { // process only alphabet
                 letters.insert(::tolower(c));
             }
              
        } 

        return letters.size() == 26;
    }
}  // namespace pangram
