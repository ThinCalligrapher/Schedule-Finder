#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>
#include "functs.h"



void User::setName() {
    std::cout << "Enter new user name: ";
    std::string name;
    std::cin >> name;
    userName = name;
}

void User::print() {
    std::cout << "Schedule for user " << userName << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << schedule[i] << std::endl;
    }
}

void User::setBitSchedule() { // resally only useful to find exact all matches in a large scale
    std::cout << "Enter schedule for user " << userName << std::endl;
    std::cout << "Enter 1 for open 0 for closed" << std::endl; 
    for(int i = 0; i < s; i++) {
        std::cout << "Is user open from " << i + 8 << " to " << i + 9 << "?  (1/0): ";
        int x{};
        std::cin >> x;
        if(x > 0) {
            bitSchedule += (1 << i);
        }
    }
}

int compareBitSchedules(int scheduleLength, int quant, User* usersArr) {
    int running {0b11111};
    for(int i = 0; i < quant - 1; i++) {
        int match = usersArr[i].bitSchedule & usersArr[i + 1].bitSchedule;
        running = match & running;
    }
    return running;
}

void graphSchedules(int quant, User* usersArr) {
    std::cout << "8     9    10   11   12    " << std::endl;
    for(int i = 0; i < quant; i++) {
        for(int j = 0; j < 5; j++) {
            if(usersArr[i].bitSchedule & (1 << j)) {
                std::cout << "####|";
            }
            else {
                std::cout << "    |";
            }
            if(j == 4) {
                std::cout << " " <<usersArr[i].userName;
            }
        }
        std::cout << "\n";   
    }
}



void defineUsers(int quant, User* users) {
    for(int i = 0; i < quant; i++) { // for quant
        users[i].setName(); // call setname on the users array objects
        users[i].setBitSchedule(); // run set bit schedule on all users
    } 
}

int initializeUsers() {
    // std::unordered_map<int, std::vector<std::string>> matches; // make an unordered map of int, vector of strings called matches
    std::cout << "Enter number of users: ";
    int quant; // at beginning enter the number of users and save it as quant
    std::cin >> quant;

    User* users = new User[quant]; // a pointer, sized to the User class, with quant amount

    return quant;
    // I am returning quant, because it is used later in the program. This number will need to be saved in the json!!!!
}


void buildMap (int quant, User* users, std::unordered_map<int, std::vector<std::string>> matches) {
        for(int i = 0; i < quant; i++) { // top level quant of users times
        for(int j = 0; j < 5; j++) { // double nested loop - 5 is the amount of schedule entries
            if(users[i].bitSchedule & (1 << j)) { // bitwise comparison
                matches[j].push_back(users[i].userName); // add to the unordered map at key j(time) the name of the user
            }
        }
    } 
}


