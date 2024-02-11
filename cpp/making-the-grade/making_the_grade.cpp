#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> rounded_scores{};

    for (auto score : student_scores) {
        rounded_scores.emplace_back(static_cast<int>(score));
    }

    return rounded_scores;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int failed_count = 0;

    for (auto score : student_scores) {
        if (score <= 40) {
            failed_count++;
        }
    }

    return failed_count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> scores_above_threshold{};

    for (auto score : student_scores) {
        if (score >= threshold) {
            scores_above_threshold.emplace_back(score);
        }
    }

    return scores_above_threshold;
}

std::array<int, 4> letter_grades(int highest_score) {
    std::array<int, 4> grade_thresholds{};
    int number_of_grades = 4;
    int lowest_score = 40;

    int score_diff = highest_score - lowest_score;
    int interval = score_diff / number_of_grades;

    for (int i = 0; i < number_of_grades; i++) {
        grade_thresholds[i] = lowest_score + 1;
        lowest_score += interval;
    }

    return grade_thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> rankings{};

    for (int i = 0; i < student_scores.size(); i++) {
        rankings.emplace_back(std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }

    return rankings;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores.at(i) == 100) {
            return student_names.at(i);
        }
    }

    return "";
}
