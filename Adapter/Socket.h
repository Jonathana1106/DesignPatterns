//
// Created by jonathan on 02/09/18.
//

#ifndef DESIGNPATTERNS_SOCKET_H
#define DESIGNPATTERNS_SOCKET_H
#include "EuropeanSocketInterface.h"

/**
 * Socket que implementa la interfaz de un Socket Europeo.
 */

typedef int Cable;

/**
 *
 */
class Socket : public EuropeanSocketInterface {

public:

    /**
     *
     * @return
     */
    int voltage() {
        return 250;
    }

    /**
     *
     * @return
     */
    Cable live() {
        return 1;
    }

    /**
     *
     * @return
     */
    Cable neutral() {
        return -1;
    }

    /**
     *
     * @return
     */
    Cable earth() {
        return 0;
    }

};

#endif //DESIGNPATTERNS_SOCKET_H