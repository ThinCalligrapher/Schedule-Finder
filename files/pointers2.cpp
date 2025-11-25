#include <iostream>
#include <cmath>

int main() {
    
    // lets make a program that takes in 3 pointers pointing to x and y coordinate
    // then it tells us the sine and cosine and tangent values
    double* z{nullptr};
    double* y { new double {1.5} };

    double* x { new double {2} };

    // lets play around with stack allocation

    int* b{};
    int num {55};
    b = &num;

    std::cout << b << " " << num << " " << *b << " " << &num << std::endl;

    // double pow(double base, double exponent)

    double base = std::pow(*x, 2) + std::pow(*y, 2); 

    double hyp = std::pow(base, .5);

    double theta = *y / hyp;

    theta = std::asin(theta);

    std::cout << "Theta is: " << theta << std::endl;

    std::cout << "Here are the SOH-CAH-TOAs: " << *y / hyp << " " 
              << *x / hyp << " " << *y / *x << std::endl;

    std::cout << "Now sin, cos, and tan of theta: " << std::sin(theta) << " "
              << std::cos(theta) << " " << std::tan(theta) << std::endl;

    double degrees = theta / (2*3.14) * 360;
    std::cout << "Degrees are: " << degrees << std::endl;



    delete x;
    x = nullptr;
    delete y;
    y = nullptr;
    delete z;
    z = nullptr;

    return 0;
    
}