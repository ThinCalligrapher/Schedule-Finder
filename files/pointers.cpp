#include <iostream>

int main() {
    int x{};
    int y{};
    int* p{}; // implicit initialization of a pointer to nullptr
    int* k{};
    int* n{nullptr};
    std::cout << &x << std::endl;

    p = &x;
    std::cout << p << " " << *p << std::endl;
    std::cout << k << std::endl;
    std::cout << n << std::endl;




    const char* msg {"Hello, World"};

    std::cout << msg << std::endl;


    return 0;
}