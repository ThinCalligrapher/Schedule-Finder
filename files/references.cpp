#include <iostream>

int main() {
    int value {100};
    int& reference {value};

    std::cout << "value: " << value << "\n";
    std::cout << "reference " << reference << "\n";
    std::cout << "&value " << &value << "\n";
    std::cout << "&reference " << &reference << "\n";
    std::cout << "sizeof(value) sizeof(reference) " << sizeof(value) << " " 
              << sizeof(reference) << "\n";
    std::cout << "sizeof(&value) and reference " << sizeof(&value) << " "
              << sizeof(&reference) << "\n";

    return 0;
}