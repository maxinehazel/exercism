#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

	const double mecury_year_conversion{ 0.2408467 };
	const double venus_year_conversion{ 0.61519726 };
	const double earth_year_in_seconds{ 31557600 };
	const double mars_year_conversion{ 1.8808158 };
	const double jupiter_year_conversion{ 11.862615 };
	const double saturn_year_conversion{ 29.447498 };
	const double uranus_year_conversion{ 84.016846 };
	const double neptune_year_conversion{ 164.79132 };

	class space_age {
		long long m_age{};
	public:
		space_age(long long seconds) : m_age{ seconds } {};
		long long seconds() const;
		double on_mercury() const;
		double on_venus() const;
		double on_earth() const;
		double on_mars() const;
		double on_jupiter() const;
		double on_saturn() const;
		double on_uranus() const;
		double on_neptune() const;
	};

}  // namespace space_age

#endif // SPACE_AGE_H