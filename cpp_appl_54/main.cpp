#include "Iron.h"

int main() {
   
    Iron iron_example = { "ExampleBrand", "Model123", "Silver", 100, 200, true, 1500 };

    iron_example.display_info();
    iron_example.heat_up();
    iron_example.use_steam();

    return 0;
}
