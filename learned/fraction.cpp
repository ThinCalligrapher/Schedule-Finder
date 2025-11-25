#include <iostream>
#include <iomanip>

int main() {
    int x {};
    float y {};
    double z {4.21};
    double g {2.1};
    long q {};
    short w {};
    unsigned int u {};

    double science {4.5e-11};

    std::cout << science << "\n";
    std::cout << sizeof(x) << "\n";
    std::cout << sizeof(y) << "\n";
    std::cout << sizeof(z) << "\n";
    std::cout << sizeof(q) << "\n";
    std::cout << sizeof(w) << "\n";
    std::cout << sizeof(u) << std::endl;
    std::cout << z / g << std::endl;

    std::cout << std::setprecision(17);

    double h {1.23456789012345678901};

    std::cout << h << std::endl;

    double t {0};
    double o {0};

    std::cout << t / o << std::endl;



    return 0;
}