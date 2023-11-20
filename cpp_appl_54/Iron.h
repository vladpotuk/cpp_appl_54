#ifndef IRON_H
#define IRON_H

#include <string>

struct Iron {
    std::string brand;
    std::string model;
    std::string color;
    int min_temperature;
    int max_temperature;
    bool steam_function;
    int power;

    void heat_up();
    void use_steam();
    void display_info();
};

#endif 

