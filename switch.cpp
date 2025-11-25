#include <iostream>
#include <string>
// no need for switch, because its like if

enum Light {
    red,
    yellow,
    greeen // no trailing comma!
};

int main(int argc, char* argv[]) {
    int x = std::stoi(argv[1]);
    
    Light light = static_cast<Light>(x);


    switch (light) {
        case 1:
            std::cout << "One\n";
            break;
        case 2:
            std::cout << "Two\n";
            break;
        default:
            std::cout << "Other\n";
            break;
    }

    printf("Got %i", x);
    printf("\n");
    return 0;
}

// int x = std::stoi(argv[1]);
// this will take our command line argument,and make it an integer
