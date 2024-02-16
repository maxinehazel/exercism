#include "grains.h"

namespace grains {

	const int SIZE_OF_BOARD{ 64 };

	std::vector<unsigned long long> build_board() {
		std::vector<unsigned long long> board(SIZE_OF_BOARD);

		for (auto i = 0; i < SIZE_OF_BOARD; ++i) {
			if (i == 0) {
				board.at(i) = 1;
			}
			else {
				board.at(i) = board.at(i - 1) * 2;
			}
		}

		return board;
	}

	unsigned long long square(int number) {
		std::vector<unsigned long long> board = build_board();
		return board.at(number-1);
	}

	unsigned long long total() {
		std::vector<unsigned long long> board = build_board();
		long long sum{};
		for (auto i : board) {
			sum += i;
		}

		return sum;
	}

}  // namespace grains
