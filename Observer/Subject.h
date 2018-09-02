//
// Created by jonathan on 02/09/18.
//

#ifndef DESIGNPATTERNS_SUBJECT_H
#define DESIGNPATTERNS_SUBJECT_H
#include "Observer.h"

/**
 * Interfaz para el sujeto.
 */

class Subject {

public:

    /**
     * Registra un observador,
     *
     * @param observer el sujeto observador a ser registrado.
     */
    virtual void registerObserver(Observer *observer) = 0;

    /**
     * Desregistrar un observador.
     *
     * @param observer el objeto observador a ser desregistrado.
     */
    virtual void removeObserver(Observer *observer) = 0;

    /**
     * Notifica al registro de observadores cuando ha sucedido algun cambio.
     *
     */
    virtual void notifyObservers() = 0;

};

#endif //DESIGNPATTERNS_SUBJECT_H