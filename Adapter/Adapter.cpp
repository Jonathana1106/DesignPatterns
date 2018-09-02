//
// Created by jonathan on 02/09/18.
//

#include "Adapter.h"

/**
 *
 * @param oulet
 */
void Adapter::plugIn(EuropeanSocketInterface *oulet) {
    socket = oulet;
}

/**
 *
 *
 * @return
 */
int Adapter::voltage() {
    return 110;
}

/**
 *
 * @return
 */
Cable Adapter::live() {
    return socket->live();
}

/**
 *
 * @return
 */
Cable Adapter::neutral() {
    return socket->neutral();
}