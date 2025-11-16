// In this iteration we will take how many users we need and save each as a class

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <tuple>


class User {
    public:

        User(std::string name);
        std::string userName;

        std::vector<std::tuple<std::string, int, int>> monday;
        std::vector<std::tuple<std::string, int, int>> tuesday;

        void print();

        std::tuple<std::string, int, int> getScheduleAM;
        std::tuple<std::string, int, int> getSchedulePM;


    private:
};

User::User(std::string name) {
    userName = name;
}

void User::print() {
    std::cout << userName << std::endl;
    for (auto &[a, b, c] : monday) {
        std::cout << a << " " << b << " " << c << "\n";
    }
    for (auto &[a, b, c] : tuesday) {
        std::cout << a << " " << b << " " << c << "\n";
    }
}

int main() {

    std::cout << "How many users?: ";
    int userCount;
    std::cin >> userCount;


    std::vector<User> users;
    users.reserve(userCount);

    for(int i = 0; i < userCount; i++) {
        std::cout << "Enter user " << i + 1 << ":";
        std::string user;
        std::cin >> user;
        users.emplace_back(user);   
    }

    for (auto& obj : users) {
        obj.print();
    }

    return 0;
}