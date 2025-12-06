#include <iostream>

int main() {
    int* p{};
    int* p1{};
    int p2;

    if(p1) {
        std::cout << "p1 is safe" << std::endl;
    }
    else {
        std::cout << "pointer is broken" << std::endl;
    } // we get broken because it is allocated to nullptr

    int x {100};
    
    p1 = &x;

        if(p1) {
        std::cout << "p1 is safe" << std::endl;
    }
    else {
        std::cout << "pointer is broken" << std::endl;
    } // we get broken because it is allocated to nullptr



    return 0;
}