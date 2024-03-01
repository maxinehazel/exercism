use core::fmt;

#[derive(Debug, PartialEq, Eq)]
pub struct Clock {
    minuites: i32,
}

impl Clock {
    pub fn new(hours: i32, minutes: i32) -> Self {
        let minuites = ((hours * 60) + minutes).rem_euclid(24 * 60);

        Clock { minuites }
    }

    pub fn add_minutes(&self, minutes: i32) -> Self {
        let minuites = (self.minuites + minutes).rem_euclid(24 * 60);

        Clock { minuites }
    }
}

impl fmt::Display for Clock {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let hours = self.minuites / 60;
        let minutes = self.minuites % 60;
        write!(f, "{:02}:{:02}", hours, minutes)
    }
}
