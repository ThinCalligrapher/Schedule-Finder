#include "functs.h"
#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>


int main() {
    int quant = getQuant();

    std::vector<User> users = initializeUsers(quant);

    defineUsers(quant, users);

    std::unordered_map<int, std::vector<std::string>> matches = makeMatches(quant);

    buildMap(quant, users, matches);

    

    graphSchedules(quant, users);


    return 0;
}