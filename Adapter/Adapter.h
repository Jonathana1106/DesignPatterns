//
// Created by jonathan on 02/09/18.
//

#ifndef DESIGNPATTERNS_ADAPTER_H
#define DESIGNPATTERNS_ADAPTER_H
#include "EuropeanSocketInterface.h"
#include "AmericanSocketInterface.h"

/**
 * Adaptador que implementa la interfaz de un conector Americano.
 */

class Adapter : public AmericanSocketInterface {

    EuropeanSocketInterface* socket;

public:

    /**
     *
     * @param oulet
     */
    void plugIn(EuropeanSocketInterface* oulet);

    /**
     *
     * @return
     */
    int voltage();

    /**
     *
     * @return
     */
    Cable live();

    /**
     *
     * @return
     */
    Cable neutral();

};

#endif //DESIGNPATTERNS_ADAPTER_H