#include <string>

namespace log_line {

	class Error {
		std::string fullError, level, message;
	public:
		Error(std::string);
		std::string getLevel() { return level; }
		std::string getMessage() { return message; }
	};

	Error::Error(std::string errorString) {
		std::string delimiter = ": ";
		size_t seperationIndex = errorString.find(delimiter);

		message = errorString.substr(seperationIndex + 2);
		level = errorString.substr(0, seperationIndex);
		level = level.substr(level.find("[") + 1, level.find("]") - 1);
	}

	std::string message(std::string errorString) {
		Error e = Error(errorString);

		return e.getMessage();
	}

	std::string log_level(std::string errorString) {
		Error e = Error(errorString);

		return e.getLevel();
	}

	std::string reformat(std::string errorString) {
		Error e = Error(errorString);

		return e.getMessage() + " (" + e.getLevel() + ")";
	}

} // namespace log_line
