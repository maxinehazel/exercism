use core::fmt;

#[derive(Debug, PartialEq, Eq)]
pub struct Clock {
    hours: i32,
    minutes: i32,
}

impl Clock {
    pub fn new(hours: i32, minutes: i32) -> Self {
        Self::calculate_time_overflow(hours, minutes)
    }

    pub fn add_minutes(&self, minutes: i32) -> Self {
        let minutes = self.minutes + minutes;
        let hours = self.hours;

        Self::calculate_time_overflow(hours, minutes)
    }

    fn calculate_time_overflow(hours: i32, minutes: i32) -> Self {
        let mut minutes = minutes;
        let mut hours = hours;

        while minutes > 60 {
            hours += 1;
            minutes -= 60;
        }

        while hours >= 24 {
            hours -= 24;
        }

        Clock { hours, minutes }
    }
}

impl fmt::Display for Clock {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{:02}:{:02}", self.hours, self.minutes)
    }
}
