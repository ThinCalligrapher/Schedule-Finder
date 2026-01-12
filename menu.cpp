#include "menu.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "functs.h"

int fileInitialize(std::string fileName, std::vector<User>& usersArr) {
    std::fstream file(fileName);

    int userCount{};
    int debug{};
    int sched{};
    std::string line{};
    std::string name{};


    try {
        file >> line;
        userCount = stoi(line);
    }
    catch(...) {
        std::cout << "File empty" << std::endl;
        file << 0;
        return 0;
    }

    while(std::getline(file, line)) {
        if (line.length() > 0) {
            if (line.at(0) == '/') {
                name = line.substr(1);
            }
        else {
            sched = stoi(line);
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
        out << it.userName << "\n" << it.bitSchedule << "\n" << "\n";
    }
}

int welcomeScreen() {
    std::cout << "####################" << "\n\n";
    std::cout << "Welcome to Schedule Builder\n";
    std::cout << "Please enter your choice\n\n";

    std::cout << "1: See current schedules\n";
    std::cout << "2: Make new schedules\n";
    std::cout << "3: Remove user\n";
    std::cout << "4: Add user\n";

    int choice{};
    std::cin >> choice;
    return choice;
}

