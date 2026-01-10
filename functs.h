#ifndef FUNCTS_H
#define FUNCTS_H

#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>


class User {
    public:
        std::string userName;
        static const int s {5};
        int schedule[s];
        int bitSchedule{};
        User() {};

        void setName() {
        }

        void print() {
        }

        void setBitSchedule() { 
        }
};

int compareBitSchedules(int scheduleLength, int quant, User* usersArr) {
}

void graphSchedules(int quant, User* usersArr) {
}



void defineUsers(int quant, User* users) {
}

int initializeUsers() {
}


void buildMap (int quant, User* users, std::unordered_map<int, std::vector<std::string>> matches) {
}









#endif

