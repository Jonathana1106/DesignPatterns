//
// Created by jonathan on 02/09/18.
//

#ifndef DESIGNPATTERNS_ELECTRICKETTLE_H
#define DESIGNPATTERNS_ELECTRICKETTLE_H

#include "AmericanSocketInterface.h"

/**
 * Clase que se aprovechara de las caracteristicas de un adaptador para
 * poder conectarse a una fuente de tension con entrada distinta para la
 * que fue fabricada.
 */

class ElectricKettle {

    AmericanSocketInterface* power;

public:

    /**
     *
     * @param supply
     */
    void plugIn(AmericanSocketInterface* supply);

    /**
     *
     */
    void boil();
};
#endif //DESIGNPATTERNS_ELECTRICKETTLE_H
