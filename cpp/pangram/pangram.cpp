#include "pangram.h"
#include <map>
#include <cctype>

namespace pangram {

	bool is_pangram(std::string text) {
		if (text == "") {
			return false;
		}

		std::map<char, int> char_count{};

		for (auto c : text) {
			if (std::isalpha(c)) {
				++char_count[std::tolower(c)];
			}
		}

		return char_count.size() == 26;
	}

} // namespace pangram
