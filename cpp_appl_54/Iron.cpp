#include "Iron.h"
#include <iostream>

void Iron::heat_up() {
    std::cout << brand << " iron is heating up." << std::endl;
}

void Iron::use_steam() {
    if (steam_function) {
        std::cout << brand << " iron is releasing steam." << std::endl;
    }
    else {
        std::cout << brand << " iron does not have a steam function." << std::endl;
    }
}

void Iron::display_info() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Temperature Range: " << min_temperature << "°C - " << max_temperature << "°C" << std::endl;
    std::cout << "Steam Function: " << (steam_function ? "Yes" : "No") << std::endl;
    std::cout << "Power: " << power << " W" << std::endl;
}
