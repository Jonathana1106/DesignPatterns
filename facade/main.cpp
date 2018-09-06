#include <iostream>
#include "facade.h"

using namespace std;

int main() {

    facade *use = new(facade);
    int car;
    int i = 0;
    while(i == 0) {
        cout << "Which car you want to use?" << endl;
        cout << "1-Audi A5" << endl << "2-Mazda CX-5" << endl;
        cin >> car;
        if (car == 1) {
            i = 1;
            use->useAudi();
        }
        if(car == 2){
            i = 1;
            use->useMazda();
        }
    }

    return 0;
}