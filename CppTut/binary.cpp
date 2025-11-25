#include <iostream>
#include <string>
#include <vector>
#include <cmath>
// There has to be a time formatting function right?


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

int main() {

    std::string un1 = "User1";
    std::string un2 = "User2";
    

    int user1 = binary_adder(un1);
    int user2 = binary_adder(un2);

    std::cout << user1 << "\n" << user2 << std::endl;


    // I have the schedules built in binary
    // Now I need to go number by number and & them
    // If they are both 1 then we put a 1 in the matching spot in the both int


    int matching_schedule{};
    for (int i = 0; i < 11; i++) {
        if((user1 & (1 << i)) && (user2 & (1 << i))) {
            matching_schedule += (1 << i);
            if(i < 5) {
                std::cout << "Both open from " << i + 8 << " to " << i + 9 << "\n";
            }
            else {
                std::cout << "Both open from " << i - 4 << " to " << i - 3 << "\n";
            }
        }
    }
    return 0;


}