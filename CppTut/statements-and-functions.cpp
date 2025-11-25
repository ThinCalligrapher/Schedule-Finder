// a statemetn is the basic unit of computation in a C++ program
// every C++ program is a collection of statements
// statements end with a semicolon ; in a C++ program


#include <iostream>







int addNumbers(int first_number, int second_number) {
    int sum = first_number + second_number;
    return sum;
}

int main(int argc, char **argv) {
    int firstNumber = 12;
    int secondNumber = 9;

    int sum = firstNumber + secondNumber;

    int first {5};
    int second {21};

    int final = addNumbers(first, second);



    std::cout << "The sum of the two numbers is : " << sum << std::endl;

    std::cout << "The sum of the function is : " << final << " and " << addNumbers(99, 100) << std::endl;

    return 0;
}


// the layout of a function
// return=type functionName (parameter 1, parameter 2) {
// }

// a function must be defined before it is used