//
// Created by elias on 22/08/18.
//

#ifndef TAREA_EXTRACLASE2_CE2103_PASTELERIA_H
#define TAREA_EXTRACLASE2_CE2103_PASTELERIA_H

#include "cocinero.h"
#include "pastel.h"

class pasteleria {

private:

    pastel pastel1;
    cocinero cocinero1;
    pastel* ptr_pastel = new(pastel);


public:

    int order_chocolate_cake();
    int order_Hawaine_cake();
    int order_strawberry_cake();

};

#endif //DESIGNPATTERNS_PASTELERIA_H