#include <iostream>
#include <iomanip>
#include <string>
#include <ios>

void weirdPrint(std::string x, int y) {
    std::cout << std::setw(y) << std::setfill('-') << x << std::endl;
    std::cout << std::fixed;
    std::cout << y << std::flush; // so flush prints but does not make a new line!
    std::cout << x << std::endl;
}

int main() {
    std::string x = "chad L";
    int z = 10;
    weirdPrint(x, z);


    std::cout << std::setw(25) << std::left << "Hello, there!" << std::endl;
    std::cout << std::setw(25) << std::right << "Hey right" << std::endl;
    std::cout << std::setw(25) << std::internal << -1.23 << "?" << std::endl;
    std::cout << std::setw(25) << -1.21 << " " << z << std::endl;
    std::cout << std::showpos; // so these changers seem to not have to be on the same line
    std::cout << std::setw(25) << z << std::endl;
    std::cout << std::hex;
    std::cout << z << std::endl;
    std::cout << std::showbase;
    std::cout << z << std::endl;
    std::cout << std::uppercase;
    std::cout << x << " " << z << std::endl;
    std::cout << std::noshowpos << std::dec; // so you can put more than one on a line
    std::cout << z << std::endl;


    return 0;
}