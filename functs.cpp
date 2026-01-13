#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>
#include "functs.h"



User::User(int newSchedule, std::string newName) {
    userName = newName;
    bitSchedule = newSchedule;
}

void User::setName() {
    std::cout << "Enter new user name: ";
    std::string name;
    std::cin >> name;
    userName = name;
}



void User::setBitSchedule() { // resally only useful to find exact all matches in a large scale
    std::cout << "Enter schedule for user " << userName << std::endl;
    std::cout << "Enter 1 for open 0 for closed" << std::endl; 
    for(int i = 0; i < s; i++) {
        std::cout << "Is " << userName << " open from " << i + 8 << " to " << i + 9 << "?  (1/0): ";
        int x{};
        while(!(std::cin >> x)) {
            std::cout << "Invalid entry - try again\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }
        if(x != 0) {
            bitSchedule += (1 << i);
        }
    }
}

int compareBitSchedules(int scheduleLength, int quant, const std::vector<User>& usersArr) {
    int running {0b11111};
    for(int i = 0; i < quant - 1; i++) {
        int match = usersArr[i].bitSchedule & usersArr[i + 1].bitSchedule;
        running = match & running;
    }
    return running;
}

void graphSchedules(int quant, const std::vector<User>& usersArr) {
    std::cout << "8     9    10   11   12    " << std::endl;
    for(int i = 0; i < quant; i++) {
        for(int j = 0; j < 5; j++) {
            if(usersArr.at(i).bitSchedule & (1 << j)) {
                std::cout << "####|";
            }
            else {
                std::cout << "    |";
            }
            if(j == 4) {
                std::cout << " " <<usersArr.at(i).userName;
            }
        }
        std::cout << "\n";   
    }
}


int getQuant() {
    std::cout << "Enter number of new users: ";
    int quant{};
    while (!(std::cin >> quant) || quant <= 0) {
        std::cout << "Enter valid number";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        
    }
    return quant;
}

std::unordered_map<int, std::vector<std::string>> makeMatches(int quant) {
    std::unordered_map<int, std::vector<std::string>> matches;
    return matches;
}


void buildMap (int quant, const std::vector<User>& users, std::unordered_map<int, std::vector<std::string>>& matches) {
        for(int i = 0; i < quant; i++) { // top level quant of users times
        for(int j = 0; j < 5; j++) { // double nested loop - 5 is the amount of schedule entries
            if(users[i].bitSchedule & (1 << j)) { // bitwise comparison
                matches[j].push_back(users[i].userName); // add to the unordered map at key j(time) the name of the user
            }
        }
    } 
}


