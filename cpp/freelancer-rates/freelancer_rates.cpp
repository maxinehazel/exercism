// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    return hourly_rate * 8.0;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    double discount_amount = before_discount * (discount / 100);
    return before_discount - discount_amount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    double monthly_rate = daily_rate(hourly_rate) * 22;
    return std::ceil(apply_discount(monthly_rate, discount));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    double discounted_rate = apply_discount(hourly_rate, discount);
    double daily_discounted_rate = daily_rate(discounted_rate);
    int days_of_work = std::floor(budget / daily_discounted_rate);
    return days_of_work;
}