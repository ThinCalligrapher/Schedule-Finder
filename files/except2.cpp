#include <new>
#include <iostream>

int main() {

    std::cout << "Start of program" << std::endl;

    int* x {nullptr};

    try {
        std::cout << "Allocating"<< std::endl;
        x =   new int[100000000];
        delete[] x;
        std::cout << "Done!" << "\n";
    }catch(...) { // the 3 dots ... mean any exception 
        std::cout << "Failed" << std::endl;
    }

    return 0;
}