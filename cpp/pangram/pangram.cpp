#include "pangram.h"
#include <algorithm>

namespace pangram {

bool is_pangram(std::string text) { 
  if (text == "") {
    return false;
  }

  std::string reverse_text = text;

  std::reverse(reverse_text.begin(), reverse_text.end());

  return text == reverse_text;
}

} // namespace pangram
