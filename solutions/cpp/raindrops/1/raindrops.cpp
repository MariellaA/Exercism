#include "raindrops.h"
#include <string>

namespace raindrops {
    std::string convert(int num) {
        std::string water_song("");

        if(num % 3 == 0) {
            water_song += "Pling";
        }
        if(num % 5 == 0) {
            water_song += "Plang";
        }
        if(num % 7 == 0) {
            water_song += "Plong";
        }
        if(num % 3 != 0 && num % 5 != 0 && num % 7 != 0) {
            water_song += std::to_string(num);
        }

        return water_song;
    }

}  // namespace raindrops
