#include <iostream>

using namespace std;

class Tire {

protected:
    string name;
    int presure;

public:
    Tire(string n, int presure):name(n),presure(presure){};
    string getName(){return name;}
    int getPresure(){return presure;}
};


class SimpleTire : public Tire{
public:
    SimpleTire():Tire("Simple Tire",50) {}
};


class LuxuryTire : public Tire{

public:
    LuxuryTire():Tire("Luxury Tire",65) {}
};


class Body {

protected:
    string name;
    int strength;

public:
    Body(string n, int strength):name(n),strength(strength) {}
    string getName(){return name;}
    int getStrength() {return strength;}
};


class SimpleBody : public Body{

public:
    SimpleBody():Body("Simple Body",350) {}
};


class LuxuryBody : public Body{

public:
    LuxuryBody():Body("Luxury Body",500) {}
};


class Car {

protected:
    string name;
    Tire *tire;
    Body *body;

public:
    Car(string n):name(n) {}
    void setTire(Tire* t) { tire = t;}
    void setBody(Body* b) {	body = b;}
    void printDetails(){
        cout << endl << "Car: " << name << endl;
        cout << "Tire: " << tire->getName() << " ---> Pressure: " << tire->getPresure() << "lb" << endl;
        cout << "Body: " << body->getName() << " ---> Weigth: " << body->getStrength() << "kg" << endl;
    }
};

