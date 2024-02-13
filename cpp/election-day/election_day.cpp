#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

int vote_count(ElectionResult result) {
    return result.votes;
}

void increment_vote_count(ElectionResult& result, int votes) {
    result.votes += votes;
}

// TODO: Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.
ElectionResult& determine_result(std::vector<ElectionResult>& final_count) {
    size_t winner_index{};

    for (int i = 0; i < final_count.size(); ++i) {
        if (final_count.at(i).votes > final_count.at(winner_index).votes) {
            winner_index = i;
        }
    }

    final_count.at(winner_index).name = "President " + final_count.at(winner_index).name;
    
    return final_count.at(winner_index);
}

}  // namespace election