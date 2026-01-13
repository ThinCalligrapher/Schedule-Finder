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
    std::cout << "Enter menu number option:  ";
    while (true) {
        try {
            std::cin >> choice;
        }
        catch(...) {
            std::cout << "Enter valid number\n";
            continue;
        }
        break;

    }
    std::cout << "****************\n";
    return choice;
}


void deleteUser(std::string delUser, std::vector<User>& users) {
    // for (auto it = users.begin(); it != users.end();) {
    //     if ((*it).userName == delUser) {
    //         it = users.erase(it);
    //         break;
    //     }
    //     else {
    //         it++;
    //     }
    for(int i = 0; i < users.size(); i++) {
        if (users.at(i).userName == delUser) {
            users[i] = users.back();
            users.pop_back();
            break;
        }
    }
}

