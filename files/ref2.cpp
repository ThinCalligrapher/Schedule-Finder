#include <iostream>

int main() {
    int x {100};
    int y {50};

    int& z {x};

    int* p {&x};

    int* p2 {&y};

    int* p3 {};
    z = 11;

    const int& c {x};

    x = 12;

    c = 13;



    std::cout << x << " " << y << " " << z << " " << p << " " << *p << " " << p2 << std::endl;
    std::cout << c << std::endl;


    return 0;
}