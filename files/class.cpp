#include <string>
#include <vector>
#include <iostream>

class User {
    public:
        std::string userName;
        int schedule[5];
        User() {};

        void print() {
            std::cout << "Schedule for user " << userName << std::endl;
            for (int i = 0; i < 5; i++) {
                std::cout << schedule[i] << std::endl;
            }
        }
};


int main() {
    std::cout << "Enter number of users: ";
    int quant;
    std::cin >> quant;

    User* users = new User[quant]; // a pointer, sized to the User class, with quant amount

    for(int i = 0; i < quant; i++) {
        std::cout << "Enter new user name: ";
        std::string name;
        std::cin >> name;
        users[i].userName = name;
        std::cout << "Enter schedule, hour by hour, starting with 8-9 for" << "\n" <<
        "user " << name << std::endl;
        for(int j = 0; j < 5; j++) {
            std::cout << j + 8 << " - " << j + 9 << ":  ";
            int x;
            std::cin >> x;
            users[i].schedule[j] = x;
        }
    }

    for(int i = 0; i < quant; i++) {
        users[i].print();
    }

    delete[] users;

    return 0;





}