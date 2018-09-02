//
// Created by elias on 25/08/18.
//

#include "cocinero.h"
#include "pastel.h"

std::string* ingredient;
long cocinero::cook_a_Hawaiana_cake(pastel pastel1) {
    ingredient = &taste_1;
    pastel1.save_taste(ingredient);
    ingredient = &size_2;
    pastel1.save_size(ingredient);
    ingredient = &fruit_1;
    pastel1.save_fruits(ingredient);
    pastel1.show_info();
    return 0;
}

long cocinero::cook_a_chocolate_cake(pastel pastel1) {
    ingredient = &taste_2;
    pastel1.save_taste(ingredient);
    ingredient = &size_1;
    pastel1.save_size(ingredient);
    ingredient = &fruit_3;
    pastel1.save_fruits(ingredient);
    pastel1.show_info();
    return 0;
}

long cocinero::cook_a_strawberry_cake(pastel pastel1) {
    ingredient = &taste_3;
    pastel1.save_taste(ingredient);
    ingredient = &size_3;
    pastel1.save_size(ingredient);
    ingredient = &fruit_2;
    pastel1.save_fruits(ingredient);
    pastel1.show_info();
    return 0;
}
