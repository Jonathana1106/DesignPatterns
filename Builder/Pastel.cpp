//
// Created by elias on 22/08/18.
//

#include <iostream>
#include "Pastel.h"

long pastel::save_taste(std::string* ptr_taste) {
    taste = *ptr_taste;
    return 0;
}

long pastel::save_size(std::string *ptr_size) {
    size = *ptr_size;
    return 0;
}

long pastel::save_fruits(std::string *ptr_fruits) {
    fruits = *ptr_fruits;
    return 0;
}

int pastel::show_info() {

    std::cout << "This cake have a " << taste << " flavor." << std::endl;
    std::cout << "His size is " << size << std::endl;
    std::cout << "The cake must have " << fruits << " as the main ingredient." << std::endl;

    return 0;
}
