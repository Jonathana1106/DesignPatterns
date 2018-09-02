//
// Created by jonathan on 02/09/18.
//

#ifndef DESIGNPATTERNS_CLIENT_H
#define DESIGNPATTERNS_CLIENT_H
#include "Observer.h"

/**
 * Cliente que implementa la interfaz Observador.
 *
 */

class Client : public Observer {

    int id;

public:

    Client(int id);

    virtual void update(float temperatura, float humedad, float presion) override;

};

#endif //DESIGNPATTERNS_CLIENT_H