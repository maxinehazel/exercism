#include "raindrops.h"
#include <string>
#include <sstream>

namespace raindrops {

	std::string convert(int number) {
		std::ostringstream oss;
		std::string result;

		if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0) {
			return std::to_string(number);
		} else {
			if (number % 3 == 0) {
				oss << "Pling";
			}

			if (number % 5 == 0) {
				oss << "Plang";
			}

			if (number % 7 == 0) {
				oss << "Plong";
			}

			result = oss.str();

			return result;
		}
	}

}  // namespace raindrops
