#include <iostream>

int main() {
    int a {};
    char b = 'a';
    float c {3.0};
    double d {4.0};

    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(b) << std::endl;


    int r = __INT_MAX__;

    std::cout << r << std::endl;

    int octal = 017;
    int hexadecimal = 0x0f;
    int binary = 0b00001111;

    std::cout << octal << " " << hexadecimal << " " << binary << std::endl;

    std::cout << sizeof(c) << " " << sizeof(d) << std::endl;

    int x = 2.9;
    std:: cout << x << std::endl;

    int y;

    std::cout << y << std::endl;
    return 0;

    // integer has 4 bytes. Lets work on the C++ memory palace
    // what do I associate with C++? Gallalee?
}