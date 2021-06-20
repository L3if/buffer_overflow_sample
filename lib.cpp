//
// Created by Lev Zagnetin on 6/19/21.
//

#include "lib.h"

int randint(int min, int max){
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(min, max);
    return dist6(rng);
}

character::character(char username[], bool requestgod) {
    strcpy(this->name, username);
    if (requestgod){
        std::cout << "Please enter admin password:\n";
        std::string temp{0};
        std::cin >> temp;
        godmode = (temp == adminpass);
    }
    this->printstats();
}

void character::changename(char *newname, bool requestgod) {
    strcpy(this->name, newname);
    if (requestgod){
        std::cout << "Please enter admin password:\n";
        std::string temp{0};
        std::cin >> temp;
        godmode = (temp == adminpass);
    }
}

void character::printstats() {
    std::cout << "Stats of character: "<< name <<"\n";
    std::cout << "Health: " << health << "\n";
    std::cout << "Damage: " << damage << "\n";
    std::cout << "Is god: " << godmode << "\n";
    std::cout << "Items: " << items->length() << "\n";
}

void character::printitem(int id) {
    std::cout << "Item is: " << items[id] << "\n";
    return;
}




