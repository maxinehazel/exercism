namespace hellmath {

	enum class AccountStatus {
		mod,
		user,
		guest,
		troll
	};

	enum class Action {
		read,
		write,
		remove
	};

	bool display_post(AccountStatus poster, AccountStatus viewer) {
		switch (poster)
		{
		case hellmath::AccountStatus::troll:
			return viewer == AccountStatus::troll;
		default:
			return true;
		}
	}

	bool permission_check(Action action, AccountStatus account) {
		switch (account)
		{
		case hellmath::AccountStatus::mod:
			return true;
		case hellmath::AccountStatus::user:
		case hellmath::AccountStatus::troll:
			return action == Action::read || action == Action::write;
		case hellmath::AccountStatus::guest:
			return action == Action::read;
		default:
			return false;
		}
	}

	bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
		switch (player1)
		{
		case hellmath::AccountStatus::mod:
		case hellmath::AccountStatus::user:
			return player2 == AccountStatus::mod || player2 == AccountStatus::user;
		case hellmath::AccountStatus::troll:
			return player2 == AccountStatus::troll;
		default:
			return false;
		}
	}

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
	bool has_priority(AccountStatus player1, AccountStatus player2) {
		switch (player1)
		{
		case hellmath::AccountStatus::mod:
			return player2 != AccountStatus::mod;
		case hellmath::AccountStatus::user:
			return player2 == AccountStatus::guest || player2 == AccountStatus::troll;
		case hellmath::AccountStatus::guest:
			return player2 == AccountStatus::troll;
		default:
			return false;
		}
	}

}  // namespace hellmath