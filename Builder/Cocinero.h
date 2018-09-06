//
// Created by elias on 25/08/18.
//

#ifndef TAREA_EXTRACLASE2_CE2103_COCINERO_H
#define TAREA_EXTRACLASE2_CE2103_COCINERO_H


#include <string>
#include "Pastel.h"

class cocinero{
private:
    std::string size_1 = "little";
    std::string size_2 = "medium";
    std::string size_3 = "big";
    std::string taste_1 = "smooth";
    std::string taste_2 = "crunchy";
    std::string taste_3 = "concise";
    std::string fruit_1 = "pineapple";
    std::string fruit_2 = "strawberry";
    std::string fruit_3 = "peach and cocoa";

public:
    long cook_a_Hawaiana_cake(pastel);
    long cook_a_chocolate_cake(pastel);
    long cook_a_strawberry_cake(pastel);

};


#endif //DESIGNPATTERNS_COCINERO_H
