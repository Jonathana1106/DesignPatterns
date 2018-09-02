//
// Created by jonathan on 02/09/18.
//

#ifndef DESIGNPATTERNS_OBSERVER_H
#define DESIGNPATTERNS_OBSERVER_H

/**
 * Interfaz para el Observador.
 */

class Observer {

public:

    /**
     * Actualiza el estado del Observador.
     *
     * @param temperatura
     * @param humedad
     * @param presion
     */
    virtual void update(float temperatura, float humedad, float presion) = 0;

};

#endif //DESIGNPATTERNS_OBSERVER_H