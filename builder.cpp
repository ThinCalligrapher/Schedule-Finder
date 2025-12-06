#include <string>
#include <vector>
#include <iostream>
#include <unordered_map> // for finding matches and putting them in the hash map



class User {
    public:
        std::string userName;
        static const int s {5};
        int schedule[s];
        int bitSchedule{};
        User() {};

        void setName() {
            std::cout << "Enter new user name: ";
            std::string name;
            std::cin >> name;
            userName = name;
        }

        void print() {
            std::cout << "Schedule for user " << userName << std::endl;
            for (int i = 0; i < 5; i++) {
                std::cout << schedule[i] << std::endl;
            }
        }
        void setSchedule() { //  obsolete
            std::cout << "Enter schedule for user " << userName << std::endl;
            std::cout << "Enter 1 for open 0 for closed" << std::endl;
            for(int i = 0; i < 5; i++) {
                std::cout << "Is user open from " << i + 8 << " to " << i + 9 << "?  (1/0): ";
                int x{};
                std::cin >> x;
                schedule[i] = x;
            }
        }

        void setBitSchedule() {
            std::cout << "Enter schedule for user " << userName << std::endl;
            std::cout << "Enter 1 for open 0 for closed" << std::endl; 
            for(int i = 0; i < s; i++) {
                std::cout << "Is user open from " << i + 8 << " to " << i + 9 << "?  (1/0): ";
                int x{};
                std::cin >> x;
                if(x > 0) {
                    bitSchedule += (1 << i);
                }
            }
        }
};


int compareBitSchedules(int scheduleLength, int quant, User* usersArr) {
    int running {0b11111};
    for(int i = 0; i < quant - 1; i++) {
        int match = usersArr[i].bitSchedule & usersArr[i + 1].bitSchedule;
        running = match & running;
    }
    return running;
}


int main() {
    std::cout << "Enter number of users: ";
    int quant;
    std::cin >> quant;

    User* users = new User[quant]; // a pointer, sized to the User class, with quant amount

    for(int i = 0; i < quant; i++) {
        users[i].setName();
        users[i].setBitSchedule();
    }

    for(int i = 0; i < quant; i++) {
        users[i].print();
    }

    int scheduleMatch{};

    scheduleMatch = compareBitSchedules(5, quant, users);

    std::cout << "This is a test " << scheduleMatch << std::endl;

    delete[] users;

    return 0;





}