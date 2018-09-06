//
// Created by nyverk on 05/09/18.
//

#include <iostream>
#include "Car.cpp"

using namespace std;

class carFactory {

private:
    Car *car;

protected:
    virtual Tire * buildTire() = 0;
    virtual Body * buildBody() = 0;

public:
    virtual Car* buildWholeCar() = 0;
};


class SimpleCarFactory : public carFactory {

    Tire * buildTire() {
        return new SimpleTire();
    }
    Body * buildBody() {
        return new SimpleBody();
    }

    Car * buildWholeCar() {
        Car *car = new Car("Simple Car");
        car->setTire(buildTire());
        car->setBody(buildBody());
        return car;
    }
};


class LuxuryCarFactory : public carFactory {

    Tire * buildTire() {
        return new LuxuryTire();
    }
    Body * buildBody() {
        return new LuxuryBody();
    }
    Car * buildWholeCar() {
        Car *car = new Car("Luxury Car");
        car->setTire(buildTire());
        car->setBody(buildBody());
        return car;
    }
};