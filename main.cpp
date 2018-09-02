#include <iostream>
#include "Observer/WeatherData.h"
#include "Observer/Client.h"
#include "Adapter/Socket.h"
#include "Adapter/Adapter.h"
#include "Adapter/ElectricKettle.h"
#include "Builder/pasteleria.h"

using namespace std;

int main() {

    int pattern;

    cout << "Para utilizar el patron deseado ingrese su numero. \n";
    cout << "1.Builder. \n";
    cout << "2.Facade. \n";
    cout << "3.Adapter. \n";
    cout << "4.Observer. \n";
    cout << "5.Abstract Factory. \n";

    cin >> pattern;

    while (pattern != 1 && pattern != 2 && pattern != 3 && pattern != 4 && pattern != 5) {

        cout << "Ingrese el numero del patron a esciger nuevamente. \n";
        cout << "1.Builder. \n";
        cout << "2.Facade. \n";
        cout << "3.Adapter. \n";
        cout << "4.Observer. \n";
        cout << "5.Abstract Factory. \n";
        cin >> pattern;
    }

    switch (pattern) {
        case 1: {
            cout << "Builder. \n";

            pasteleria pasteleria1;
            int selection;
            std::cout << "What kind of cake do you want: \n";
            std::cout << "1 - Chocolate cake" << std::endl <<
                      "2 - Hawaine cake" << std::endl <<
                      "3 - Strawberry cake" << std::endl;
            std::cin >> selection;

            if (selection == 1) {

                pasteleria1.order_chocolate_cake();

            } else if (selection == 2) {

                pasteleria1.order_Hawaine_cake();

            } else if (selection == 3) {

                pasteleria1.order_strawberry_cake();
            }

            break;
        }
        case 2: {
            cout << "Facade. \n";
            break;
        }
        case 3: {
            cout << "Adapter. \n";

            Socket *socket = new Socket;
            Adapter *adapter = new Adapter;
            ElectricKettle *kettle = new ElectricKettle;

            adapter->plugIn(socket);
            kettle->plugIn(adapter);

            kettle->boil();

            break;
        }
        case 4: {
            cout << "Observer. \n";

            WeatherData weatherStation;
            Client one(1), two(2), three(3);

            float temperatura, humedad, presion;

            weatherStation.registerObserver(&one);
            weatherStation.registerObserver(&two);
            weatherStation.registerObserver(&three);

            std::cout
                    << "Enter Temperature (Farenheit), Humidity (Relative), Pressure (Pascals) separated by spaces: << ";
            std::cin >> temperatura >> humedad >> presion;

            while ((temperatura > -273 || temperatura < 5000) && (humedad >= 0 || humedad <= 100) &&
                   (presion > 885000 || presion < 101325)) {
                std::cout
                        << "Enter Temperature (Farenheit), Humidity (Relative), Pressure (Pascals) separated by spaces: << ";
                std::cin >> temperatura >> humedad >> presion;
            }

            weatherStation.setState(temperatura, humedad, presion);

            weatherStation.removeObserver(&two);

            std::cout
                    << "\n\nEnter Temperature (Farenheit), Humidity (Relative), Pressure (Pascals) separated by spaces: << ";
            std::cin >> temperatura >> humedad >> presion;

            weatherStation.setState(temperatura, humedad, presion);

            break;
        }
        case 5: {
            cout << "Abstract Factory. \n";
            break;
        }
    }
}