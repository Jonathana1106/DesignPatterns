//
// Created by elias on 22/08/18.
//

#ifndef TAREA_EXTRACLASE2_CE2103_PASTEL_H
#define TAREA_EXTRACLASE2_CE2103_PASTEL_H
#include <string>

class pastel {

private:
    int years = 0;
    std::string taste;
    std::string size;
    std::string fruits;

public:
    long save_taste(std::string *ptr_taste);
    long save_size(std::string *ptr_size);
    long save_fruits(std::string *ptr_fruits);
    int show_info();

};

#endif //DESIGNPATTERNS_PASTEL_H
