namespace targets {
// TODO: Insert the code for the alien class here
	class Alien {
	public:
		Alien(int x, int y) {
			x_coordinate = x;
			y_coordinate = y;
		}
		int get_health() {
			return health;
		}
		bool hit() {
			if (is_alive()) {
				--health;
			}
			return true;
		}
		bool is_alive() {
			return get_health() > 0;
		}
		bool teleport(int x, int y) {
			x_coordinate = x;
			y_coordinate = y;
			return true;
		}
		bool collision_detection(Alien b) {
			return x_coordinate == b.x_coordinate && y_coordinate == b.y_coordinate;
		}
		int x_coordinate;
		int y_coordinate;
	private:
		int health = 3;
	};
}  // namespace targets