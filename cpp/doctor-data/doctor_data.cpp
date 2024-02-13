#include "doctor_data.h"

namespace heaven {
	Vessel::Vessel(std::string name, int generation, star_map::System current_system) {
		this->name = name;
		this->generation = generation;
		this->current_system = current_system;
	}

	Vessel Vessel::replicate(std::string name) {
		return Vessel{ name, this->generation + 1, this->current_system };
	}

	void Vessel::make_buster() {
		this->busters++;
	}

	bool Vessel::shoot_buster() {
		if (this->busters > 0) {
			this->busters--;
			return true;
		}
		else {
			return false;
		}
	}

	std::string get_older_bob(Vessel bob1, Vessel bob2) {
		if (bob1.generation < bob2.generation) {
			return bob1.name;
		}
		else {
			return bob2.name;
		}
	}

	bool in_the_same_system(Vessel bob1, Vessel bob2) {
		return bob1.current_system == bob2.current_system;
	}
}