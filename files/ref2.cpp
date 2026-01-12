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

    // c = 13; -> this does not compile - assignment of read-only reference 'c'


    // lets talk about constant pointers
    // this means constant value, not constant pointer
    const int* a{&x};

    // this means that the pointer is const (cannot be moved) but the value it points to can be changed

    int* const b{&x};

    // this means that both are not changable
    const int* const d{&x};



    std::cout << x << " " << y << " " << z << " " << p << " " << *p << " " << p2 << std::endl;
    std::cout << c << std::endl;


    return 0;
}