//
// Created by Lev Zagnetin on 6/19/21.
//

#ifndef OVERFLOW_SAMPLE_LIB_H
#define OVERFLOW_SAMPLE_LIB_H
#ifndef _LIBCPP_IOSTREAM
#include <iostream>
#endif
#include <random>
#include <iostream>
int randint(int min, int max);
class character{
public:
    character(char username[], bool requestgod = false);
    void changename(char newname[], bool requestgod = false);
    void printstats();
    void printitem(int id);
private:
    int health{100};
    char name[20];
    bool godmode{false};
    int damage{randint(10,50)};
    std::string adminpass {"$ecR3T_P@$$w0rD"};
    std::string items[30];
};

#endif //OVERFLOW_SAMPLE_LIB_H
