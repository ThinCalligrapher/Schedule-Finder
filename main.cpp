#include "functs.h"
#include "menu.h"
#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>


void addUsers(std::vector<User>& users) {
    int quant = getQuant();
    for (int i = 0; i < quant; i++) {
        std::string name{};
        int schedule // I was in the middle of adding the ability
        // to add users to the existing vector
        // this would require a major rewrite!!
    }

}

int main() {

    std::vector<User> users;
    int howMany = fileInitialize("users.txt", users);


    int choice  = welcomeScreen();
    int quant = getQuant();

    initializeUsers(quant, users);

    defineUsers(quant, users);

    std::unordered_map<int, std::vector<std::string>> matches = makeMatches(quant);

    buildMap(quant, users, matches);

    

    graphSchedules(quant, users);

    filePopulate("users.txt", users);


    return 0;
}