#include "reverse_string.h"
#include <string>

namespace reverse_string {

	std::string reverse_string(std::string_view startString) {
		std::string resultString;

		while (!startString.empty()) {
			char character = startString.back();
			startString.remove_suffix(1);
			resultString.push_back(character);
		}

		return resultString;
	}

}  // namespace reverse_string
