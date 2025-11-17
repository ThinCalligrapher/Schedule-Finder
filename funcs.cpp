#include <iostream>
#include <string>
#include <vector>

int binary_adder(std::string user) {
    int binary_schedule{};
    int yn;
    std::cout << "Schedule for " << user << "\n";
    for(int i = 0; i < 11; i++) {
        if(i < 5) {
            std::cout << "Enter 1/0" << "\n";
            std::cout << "Open from " << i + 8 << " to " << i + 9 << "?  --> ";
            std::cin >> yn;
            std::cout << "\n";
        }
        else {
            std::cout << "Enter 1/0" << "\n";
            std::cout << "Open from " << i - 4 << " to " << i - 3 << "?  --> ";
            std::cin >> yn;
            std::cout << "\n";
        }
        if (yn == true && i == 0) {
            binary_schedule += 1;
            continue;
        }
        if (yn == true) {
            binary_schedule += (1 << i);
        }
        
    }

    return binary_schedule;
}

std::vector<int> days() {
    std::cout << "Enter username:";
    std::string uname;
    std::cin >> uname;
    std::vector<int> final;
    for(int i = 0; i < 2; i++) {
        std::cout << "Enter schedule for day " << i << "\n";
        int x = binary_adder(uname);
        final.push_back(x);
    }

    
}

// how to get the all comparison one?
// it has to be a vector of ints right?

