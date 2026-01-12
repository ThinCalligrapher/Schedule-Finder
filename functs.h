#ifndef FUNCTS_H
#define FUNCTS_H

#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>


class User {
    public:
        std::string userName;
        int bitSchedule{};
        int s = 5;
        User() = default;
        User(int newSchedule, std::string newName);
        void setName();



        void setBitSchedule();
};


int compareBitSchedules(int scheduleLength, int quant, const std::vector<User>& usersArr);

void graphSchedules(int quant, const std::vector<User>& usersArr);


int getQuant();

void defineUsers(int quant, std::vector<User>& users);

std::vector<User> initializeUsers(int quant);


void buildMap (int quant, const std::vector<User>& users, std::unordered_map<int, std::vector<std::string>>& matches);

std::unordered_map<int, std::vector<std::string>> makeMatches(int quant);










#endif

