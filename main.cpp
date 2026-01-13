#include "functs.h"
#include "menu.h"
#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <fstream>


void addUsers(std::vector<User>& users) {
    int quant = getQuant();
    for (int i = 0; i < quant; i++) {
         // I was in the middle of adding the ability
        // to add users to the existing vector
        // this would require a major rewrite!!
        users.emplace_back();
        users.back().setName();
        users.back().setBitSchedule();
       
    }
    filePopulate("users.txt", users);

}

int main() {

    std::cout << "####################" << "\n\n";
    std::cout << "Welcome to Schedule Builder\n";
    std::cout << "Please enter your choice\n\n";

    std::vector<User> users;
    int quant = fileInitialize("users.txt", users);
    std::cout << "How many: " << quant << "\n";
    


    int choice {};

    while(choice != 4) {
        choice = welcomeScreen();
        if (choice == 1) {

            graphSchedules(users.size(), users);
            std::cout << "\n";
        }
        else if (choice == 2) {
            addUsers(users);
            std::cout << "\n";
        }
        else if (choice == 3) {
            std::cout << "Enter exact username you want to delete: ";
            std::string toDel{};
            std::cin >> toDel;
            deleteUser(toDel, users);
            std::cout << "\n";
        }
        else {
            continue;
            std::cout << "\n";
        }
    }

    filePopulate("users.txt", users);


    return 0;
}