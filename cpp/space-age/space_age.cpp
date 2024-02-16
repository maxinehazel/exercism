#include "space_age.h"

namespace space_age {
	long long space_age::seconds() const {
		return m_age;
	}

	double space_age::on_mercury() const {
		return this->on_earth() / mecury_year_conversion;
	}

	double space_age::on_venus() const {
		return this->on_earth() / venus_year_conversion;
	}

	double space_age::on_earth() const {
		return m_age / earth_year_in_seconds;
	}

	double space_age::on_mars() const {
		return this->on_earth() / mars_year_conversion;
	}

	double space_age::on_jupiter() const {
		return this->on_earth() / jupiter_year_conversion;
	}

	double space_age::on_saturn() const {
		return this->on_earth() / saturn_year_conversion;
	}

	double space_age::on_uranus() const {
		return this->on_earth() / uranus_year_conversion;
	}

	double space_age::on_neptune() const {
		return this->on_earth() / neptune_year_conversion;
	}
}  // namespace space_age
