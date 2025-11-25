#include <iostream>

int main() {
    int k{};
do {
    std::cout << "Enter a positive number: ";
    std::cin >> k;
} while (k < 0);
std::cout << k << std::endl;
}