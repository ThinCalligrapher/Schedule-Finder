// Lets make this way more simple. Make a class called user with every day of the week. Y

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>


class User {
    public:
        User(std::string name);
        std::string userName;
    
        std::vector<std::pair<int,int>> Monday;
        std::vector<std::pair<int,int>> Tuesday;
        std::vector<std::pair<int,int>> Wednesday;
        std::vector<std::pair<int,int>> Thursday;
        std::vector<std::pair<int,int>> Friday;

        void print();
        
};

User::User(std::string name) {
    name = userName;

}

void User::print() {
    for (auto &i : Monday) {
        std::cout << i.first << " " << i.second << "\n";
    }

    for (auto &j : Tuesday) {
        std::cout << j.first << " " << j.second << "\n";
    }
}


int main() {
    std::string chad;
    std::cout << "Enter user name: ";
    std::cin >> chad;
    User guy(chad);

    int first;
    int second;

    for (int i = 0; i < 2; i++) {
        std::cout << "Enter a range via format 1 2 of times you are open on " << i << ": ";
        std::cin >> first;
        std::cin >> second;
        std::pair<int, int> p(first, second);
        switch(i) {
            case 0:
                guy.Monday.push_back(p);
                break;
            case 1:
                guy.Tuesday.push_back(p);
                break;
        }
        std::cout << "Enter 'y' if there are more times to add to this day: ";
        char ans{};
        std::cin >> ans;
        if (ans == 'y') {
            i -= 1;
        }

    }
    guy.print();

    return 0;


}

