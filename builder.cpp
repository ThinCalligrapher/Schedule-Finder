#include <string>
#include <vector>
#include <iostream>
#include <unordered_map> // for finding matches and putting them in the hash map

// ok so I am now seeing that a hash map pretty much does everything for me already here, I just add the name to a hash map at schedule build
// then I will automatically see who is overlapping where... but I do build the hash map not when building the schedule
// but by bit shifting the schedule integer, which does take time
// not that much but each operation does take time
// and then I am in users * schedule + constant time


// I really do need to look into that iterating code, it shows references and how powerful auto is!
// especially for iterators

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

        void setBitSchedule() { // resally only useful to find exact all matches in a large scale
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

void graphSchedules(int quant, User* usersArr) {
    std::cout << "8     9    10   11   12    " << std::endl;
    for(int i = 0; i < quant; i++) {
        for(int j = 0; j < 5; j++) {
            if(usersArr[i].bitSchedule & (1 << j)) {
                std::cout << "####|";
            }
            else {
                std::cout << "    |";
            }
        }
        std::cout << "\n";   
    }
}


int main() {
    std::unordered_map<int, std::vector<std::string>> matches;
    std::cout << "Enter number of users: ";
    int quant;
    std::cin >> quant;

    User* users = new User[quant]; // a pointer, sized to the User class, with quant amount

    for(int i = 0; i < quant; i++) {
        users[i].setName();
        users[i].setBitSchedule();
    }

    for(int i = 0; i < quant; i++) {
        // users[i].print(); // this is now broken -> fix with bitSchedule
    }

    for(int i = 0; i < quant; i++) {
        for(int j = 0; j < 5; j++) {
            if(users[i].bitSchedule & (1 << j)) {
                matches[j].push_back(users[i].userName);
            }
        }
    }


    for (const auto& pair : matches) { // so this uses an iterator to iterate through the map
    std::cout << "Key: " << pair.first << "\n";

    const auto& vec = pair.second; // in looping through the keys, we get to the vector, which we make a refernece for
    for (const auto& val : vec) { // now looping through the vector 
        std::cout << "  " << val << "\n";
    }

    std::cout << "\n";
    }

    int scheduleMatch{};

    scheduleMatch = compareBitSchedules(5, quant, users);

    std::cout << "This is a test " << scheduleMatch << std::endl;

    graphSchedules(5, users);

    delete[] users;

    return 0;


    // the hash map is powerful for finding overlap between people

    // but the integers would be powerful for finding overlap between a million
    // it would be O(n) time? n operations to find the times that all people are open
    // can be extended to a million people, and much longer too

    // graphical representation?
    // use bitshifting!!
    // use the and loop, and if you get the and at that point you add ####
    // like this
    //  8   9   10  11  12 if(users[i].bitSchedule & (1 << i))
    //  ####        ########





}