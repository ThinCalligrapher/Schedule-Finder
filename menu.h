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
void deleteUser(std::string delUser, std::vector<User>& users);

#endif