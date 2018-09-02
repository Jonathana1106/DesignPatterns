//
// Created by jonathan on 02/09/18.
//

#ifndef DESIGNPATTERNS_WEATHERDATA_H
#define DESIGNPATTERNS_WEATHERDATA_H
#include <vector>
#include <algorithm>
#include <iostream>
#include "Subject.h"
#include "Observer.h"

/**
 * Implementacion de la interfaz sujeto.
 *
 */

class WeatherData : public Subject {

    std::vector<Observer *> observers; // observadores

    float temp = 0.0f;
    float hum = 0.0f;
    float pre = 0.0f;

public:

    /**
     *
     * @param observer
     */
    void registerObserver(Observer *observer) override;

    /**
     *
     * @param observer
     */
    void removeObserver(Observer *observer) override;

    /**
     *
     */
    void notifyObservers() override;

    /**
     * Establecer un nuevo estado en la estacion climatologica.
     *
     * @param temperatura new temperatura
     * @param humedad new humedad
     * @param presion new presion
     */
    void setState(float temperatura, float humedad, float presion);
};

#endif //DESIGNPATTERNS_WEATHERDATA_H