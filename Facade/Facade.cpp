//
// Created by nyverk on 05/09/18.
//

#include "Facade.h"
#include "Audi.h"
#include "Mazda.h"

int Facade::useAudi() {
    Audi *use = new(Audi);
    use->checkOil();
    use->checkBrackes();
    use->checkWater();
    use->startTrip();

    return 0;
}

int Facade::useMazda() {
    Mazda *use = new(Mazda);
    use->checkOil();
    use->checkBrackes();
    use->checkWater();
    use->startTrip();
    return 0;
}