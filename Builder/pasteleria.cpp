//
// Created by elias on 22/08/18.
//

#include "pasteleria.h"


int pasteleria::order_chocolate_cake() {
    ptr_pastel = &pastel1;
    cocinero1.cook_a_chocolate_cake(*ptr_pastel);
    return 0;
}

int pasteleria::order_Hawaine_cake() {
    ptr_pastel = &pastel1;
    cocinero1.cook_a_Hawaiana_cake(*ptr_pastel);
    return 0;
}

int pasteleria::order_strawberry_cake() {
    ptr_pastel = &pastel1;
    cocinero1.cook_a_strawberry_cake(pastel1);
    return 0;
}