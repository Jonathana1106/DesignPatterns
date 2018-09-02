//
// Created by jonathan on 02/09/18.
//

#ifndef DESIGNPATTERNS_AMERICANSOCKETINTERFACE_H
#define DESIGNPATTERNS_AMERICANSOCKETINTERFACE_H

/**
 * Interfaz de un conector Americano.
 */
typedef int Cable;

/**
 *
 */
class AmericanSocketInterface {

public:

    /**
     *
     * @return
     */
    virtual int voltage() = 0;

    /**
     *
     * @return
     */
    virtual Cable live() = 0;

    /**
     *
     * @return
     */
    virtual Cable neutral() = 0;

};

#endif //DESIGNPATTERNS_AMERICANSOCKETINTERFACE_H