#include "roman_numerals.h"
#include <string>

namespace roman_numerals {

	std::string convert(int number) {
		std::string roman_numeral;

		for (auto i = 0; i < number; i++) {
			roman_numeral += 'I';
		}

		return roman_numeral;
	}

}  // namespace roman_numerals
