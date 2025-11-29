#include <new>
#include <iostream>

int main() {

    std::cout << "Start of program" << std::endl;

    int* x;

    try {
        std::cout << "Allocating"<< std::endl;
        x =   new int[100000000];
        delete[] x;
        std::cout << "Done!" << "\n";
    }catch(...) {
        std::cout << "Failed" << std::endl;
    }

    return 0;
}