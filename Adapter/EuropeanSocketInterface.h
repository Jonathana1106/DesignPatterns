//
// Created by jonathan on 02/09/18.
//

#ifndef DESIGNPATTERNS_EUROPEANSOCKETINTERFACE_H
#define DESIGNPATTERNS_EUROPEANSOCKETINTERFACE_H

/**
 * Interfaz de un conector tipo europeo.
 */

typedef int Cable;

class EuropeanSocketInterface {

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

    /**
     *
     * @return
     */
    virtual Cable earth() = 0;

};

#endif //DESIGNPATTERNS_EUROPEANSOCKETINTERFACE_H