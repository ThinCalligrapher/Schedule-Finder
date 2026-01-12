#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "functs.h"

int fileInitialize(std::string fileName, std::vector<User>& usersArr);

void filePopulate(std::string fileName, const std::vector<User>& usersArr);

int welcomeScreen();

#endif