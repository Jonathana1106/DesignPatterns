//
// Created by jonathan on 02/09/18.
//

#include "WeatherData.h"

/**
 *
 * @param observer
 */
void WeatherData::registerObserver(Observer *observer) {

    observers.push_back(observer);

}

/**
 *
 * @param observer
 */
void WeatherData::removeObserver(Observer *observer) {

    // encuentra el observador.
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if (iterator != observers.end()) { // observador encontrado
        observers.erase(iterator); // eliminar observador
    }
}

/**
 *
 */
void WeatherData::notifyObservers() {

    for (Observer *observer : observers) { // notificar al registro de observadores
        observer->update(temp, hum, pre);
    }
}

/**
 *
 * @param temperatura
 * @param humedad
 * @param presion
 */
void WeatherData::setState(float temperatura, float humedad, float presion) {

    this->temp = temperatura;
    this->hum = humedad;
    this->pre = presion;
    std::cout << std::endl;
    notifyObservers();

}