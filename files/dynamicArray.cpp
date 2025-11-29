#include <new>
#include <iostream>


int main() {
    std::cout << "About to allocate array" << std::endl;

    size_t size {10};

    int* garbagep { new int[size] }; // this is initialized with garbage values

    int* zerop { new(std::nothrow) int[size] {} }; // zero initialized

    int* valp { new(std::nothrow) int[size] {1, 2, 3, 4, 5} };

    for (size_t i{}; i < size; i++) {
        std::cout << "valp: " << valp[i] << " : " << *(valp + i) << std::endl;
    }

    delete[] garbagep;
    garbagep = nullptr;

    delete[] zerop;
    zerop = nullptr;

    delete[] valp;
    valp = nullptr;

    return 0;


}