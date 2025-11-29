#include <iostream>
#include <vector>
#include <cmath>
// so this is the foundation of my bitwise comparison model of finding matching schedules
// now I need a way to keep track of how many users are open at a specific time

int main() {
    int x {0b0};
    std::cout << x << std::endl;

    int y {0};

    // so if there are 10 openings then it will be 10

    // lets make a schedule map

    int eight_nine {0};
    // can I use an array? it would be literally the binary numbers

    std::vector<int> openings;

    for(int i = 0; i < 10; i++) {
        openings.push_back(std::pow(2, i));
    }

    for(int i = 0; i < 10; i++) {
        std::cout << openings[i] << std::endl;
    }

    std::vector<int> first;

    for(int i = 0; i < 10; i++) {
        std::cout << "is user open at time: " << i << "?" << std::endl;
        int ans{};
        std::cin >> ans;
        if(ans > 0) {
            first.push_back(1 << i);
        }
        else {
            first.push_back(0);
        }
    }

    for (int i = 0; i < 10; i++) {
        int ans = first[i] & openings[i];
        if (ans > 0) {
            std::cout << "user is open at time " << i << std::endl;
        }
    }

    return 0;
}