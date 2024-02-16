#if !defined(GRAINS_H)
#define GRAINS_H
#include <vector>

namespace grains {

	std::vector<unsigned long long> build_board();
	unsigned long long square(int number);
	unsigned long long total();

}  // namespace grains

#endif // GRAINS_H