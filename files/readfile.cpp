#include <fstream>
#include <iostream>
#include <vector>
#include <string>


int main(int argc, char *argv[]) {
    std::string file = argv[1];

    // how do you read a file again?
    std::fstream f(file, std::ios::in);

    std::string line;
    // while(f) {
    //     std::getline(f, line);
    //     std::cout << line << std::endl;
    // } // -> This is a mistake due to just checking fail, then executing

    while(std::getline(f, line)) {
        std::cout << line << std::endl;
    }

    return 0;
}