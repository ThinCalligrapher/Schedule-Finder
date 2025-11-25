#include <iostream>
#include <iomanip>

int main() {
    int tests{};
    int sum{};
    int average{};
    int highest{};
    std::cout << "How many scores would you like to enter: ";
    std::cin >> tests;

    int scores[tests];

    for(int i = 0; i < tests; i++) {
        std::cout << "Enter score " << i + 1 << ": ";
        int score{};
        std::cin >> score;
        scores[i] = score;
        sum += score;
        if (score > highest)
            highest = score;
    }
    average = sum / tests;

    std::cout << "Average: " << average << std::endl;
    std::cout << "Highest: " << highest << std::endl;

    return 0;
}