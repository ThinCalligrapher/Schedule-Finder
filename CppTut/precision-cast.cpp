#include <iostream>
#include <iomanip>

int main() {
    int x {5};
    int y {2};

    int value1 = x / y;
    double value2 = static_cast<double>(x) / y;

    std::cout << value1 << " " << value2 << std::endl;
    std::cout << std::fixed << std::setprecision(5) << value2 << std::endl;
}