#include <iostream>

int main() {
    int value {5};

    std::cout << "Value is: " << value++ << std::endl;
    std::cout << "Incremented: " << value << " decremented " << --value << std::endl;

    for (int i = 0; i < value; i++) {
        if (i % 2 == 0) {
            ++value;
        }
        std::cout << "value, i: " << value << " " << i << std::endl;
    }

    return 0;
}