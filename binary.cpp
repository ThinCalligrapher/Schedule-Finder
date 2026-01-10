// So this function takes in the schedules of 2 users, asking hour by hour if they are open
// It then ouputs the overlap between the 2 users schedules

// For future improvements, there should be 
//  The ability to do a chosen amount of schedules
//  The breakdown of combinations of overlaps
// The 2^n possibilites all 4, 3, 2, 1, and none
//      This is where you get into algorithm
//      Because there are 12 * (n/k) possiblities
//          Every gap(11) + sum(n, k=0)n/k(2^n) wait so this is 


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