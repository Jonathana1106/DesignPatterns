//
// Created by nyverk on 05/09/18.
//

#include "facade.h"
#include "Audi.h"
#include "Mazda.h"

int facade::useAudi() {
    Audi *use = new(Audi);
    use->checkOil();
    use->checkBrackes();
    use->checkWater();
    use->startTrip();

    return 0;
}

int facade::useMazda() {
    Mazda *use = new(Mazda);
    use->checkOil();
    use->checkBrackes();
    use->checkWater();
    use->startTrip();
    return 0;
}
