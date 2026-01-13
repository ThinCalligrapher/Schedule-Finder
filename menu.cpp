#include "menu.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "functs.h"

int fileInitialize(std::string fileName, std::vector<User>& usersArr) {
    std::ifstream file(fileName);

    int userCount{};
    int debug{};
    int sched{};
    std::string line{};
    std::string name{};


    if (!file.is_open()) {
        std::cout << "Could not open file\n";
        return 0;
    }
    
    if (!(file >> userCount)) {
        std::cout << "Invalid file format\n";
        return 0;
    }

    std::getline(file, line);


    while(std::getline(file, line)) {
        if (!line.empty()) {
            if (line[0] == '/') {
                name = line.substr(1);
                std::cout << "name test" << name << "\n";
            }
            else {
            std::cout << "If you see this something is broken\n";
            std::cout << "line " << line << "::\n";
            sched = stoi(line);
            std::cout << "number test " << sched << "\n";
            usersArr.emplace_back(sched, name);
            }
        }
 

    }
    file.close();
    return userCount;
}

void filePopulate(std::string fileName, const std::vector<User>& usersArr) {
    std::ofstream out(fileName);
    // lets completely write over the file

    std::string name{};
    int schedule{};
    int userCount = usersArr.size();

    out << userCount << "\n" << "\n";

    for (auto it : usersArr) {
        out << "/" << it.userName << "\n" << it.bitSchedule << "\n" << "\n";
    }
    out.close();
}

int welcomeScreen() {

    std::cout << "\n" << "----------------------------" << "\n";
    std::cout << "1: See current schedules\n";
    std::cout << "2: Add new schedules\n";
    std::cout << "3: Remove user\n";
    std::cout << "4: Exit\n";

    int choice{};
    std::cin >> choice;
    return choice;
}

