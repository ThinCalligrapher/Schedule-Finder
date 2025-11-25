#include <iostream>
#include<iomanip>
#include <string>


void checker(int a) {
	if (a != 0) {
	std::cout << "This is true" << std::endl;
	std::cout << "It's " << a << "." << std::endl;
	}
	else {
	std::cout << "This is false\n";
	std::cout << "It's " << a << "." << std::endl;
	}
}

int main() {

	int a{};
	std::string b{};
	int c{};
	std::cout << "Enter a boolean value\n";
	std::cin >> a;
	
	std::cin.ignore();

	std::getline(std::cin, b);

	int be{};

	be = std::stoi(b);


	std::cin >> c;

	checker(a);
	checker(be);

	std::cout << std::boolalpha;
	checker(c);

	return 0;
	}


	//new things introduct