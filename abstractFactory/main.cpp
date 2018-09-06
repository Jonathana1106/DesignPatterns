#include <iostream>
#include "carFactory.cpp"

using namespace std;

int main() {

    int type;
    carFactory *factory;
    int i = 0;
    while(i == 0) {
        cout << "What kind of car you want?" << endl << endl;
        cout << "1-Simple Car" << endl << "2-Luxury Car" << endl;
        cin >> type;
        if (type == 1) {
            factory = new SimpleCarFactory;
            i ++;
        }
        if (type == 2) {
            factory = new LuxuryCarFactory;
            i ++;
        }
    }

    Car *car = factory->buildWholeCar();
    car->printDetails();

    return 0;
}