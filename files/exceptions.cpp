#include <iostream>
#include <new>

int main() {
    int x{};
    int y{};

    int* p { new(std::nothrow) int[100] };

    if (p == nullptr) {
        std::cout << "Did not allocate" << std::endl;
    }
    else {
        std::cout << "Allocated" << std::endl;
    }

    delete[] p;

    return 0;
}