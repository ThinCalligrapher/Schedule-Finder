#include <iostream>
#include <vector>
#include <unordered_map>
#include <fstream>
#include <string>

int main() {

    std::fstream file("users.txt");

    std::string line{};
    int userCount{};
    int debug{};
    std::string name{};
    int sched{};

    // top line - how many current users and thats it

    // 3 - name
    // 4 schedule

    // 6 name
    // 7 schedule

    // 9 name
    // 10 schedule

    // so starting at 3 and every other 3 (same for schedule)
        // we have new user

    // this will be build user map

    file >> line;
    
    userCount = stoi(line);

    if (userCount > 0) {
        while(std::getline(file, line)) {
            //std::cout << line;
            //std::cout << debug;
            if (line.length() > 0) {
                if (line.at(0) == '/') {
                    name = line.substr(1);
                    debug = 1;
                }
                else {
                    sched = stoi(line);
                    std::cout << name << " " << sched << std::endl;
                }
            }
        
        }
    }
    return 0;
}