//
// Created by jonathan on 02/09/18.
//

#include <iostream>
#include "ElectricKettle.h"

/**
 *
 * @param supply
 */
void ElectricKettle::plugIn(AmericanSocketInterface *supply) {
    power = supply;
}

/**
 *
 */
void ElectricKettle::boil() {
    if(power->voltage() > 110) {
        std::cout << "Kettle is on fire!" << std::endl;
        return;
    }
    if(power->live() == 1 && power->neutral() == -1) {
        std::cout << "Coffe time!" << std::endl;
    }
}