#include "raindrops.h"
#include <map>
#include <string>
namespace raindrops {
    using std::string;
    using std::map;
    
    const map<int, string> RAIN  =  {{ 3, "Pling"}, {5, "Plang"}, {7, "Plong"}}; 
    
    string convert(int rythem) {
        string result = "";
        for (auto el: RAIN) {
            if (rythem % el.first == 0) {
                result += el.second;
            }
        }

        if (result.empty()) {
            result += std::to_string(rythem);
        }

        return result;
    }

}  // namespace raindrops
