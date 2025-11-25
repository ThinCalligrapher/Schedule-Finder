// std::cerr - prints errors to the console
// std::clog - prints log messages to the console

#include <iostream>

int main() {
    std::cout << "Hello\n";

    std::cout << "The number is : " << 12 << std::endl;

    int age {21};

    std::cout << "Please type your age: " << std::endl;

    std::cin >> age;
    std::cin.ignore();
    std::string name;

    std::cout << "Please type your name: " << std::endl;
    std::getline(std::cin,name);
    //std::cin >> name;'
    std::cerr << "Error message idk" << std::endl;
    std::clog << "Ok we got this far" << std::endl;

    std::cout << "Your name is " << name << " and your age is " << age << std::endl;



    // READING DATA with SPACES ______
    // we use std::getline
    // pass in what stream gets it and what variable gets the data



    return 0;
}