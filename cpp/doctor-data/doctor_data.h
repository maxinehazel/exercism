#pragma once
#include <string>

namespace star_map {
	enum class System {
		Sol,
		BetaHydri,
		EpsilonEridani,
		AlphaCentauri,
		DeltaEridani,
		Omicron2Eridani
	};
}

namespace heaven {
	class Vessel {
	public:
		std::string name{};
		int generation{};
		star_map::System current_system{};
		int busters{};
		Vessel(std::string name, int generation, star_map::System current_system = star_map::System::Sol);
		Vessel replicate(std::string name);
		void make_buster();
		bool shoot_buster();
	};

	std::string get_older_bob(Vessel bob1, Vessel bob2);
	bool in_the_same_system(Vessel bob1, Vessel bob2);
}