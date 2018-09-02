//
// Created by jonathan on 02/09/18.
//

#include "iostream"
#include "Client.h"

/**
 *
 * @param temperatura
 * @param humedad
 * @param presion
 */
void Client::update(float temperatura, float humedad, float presion) {

    // Imprime los valores modificados
    std::cout << "---Client (" << id << ") Datos---\tTemperatura: " << temperatura
              << "\tHumedad: " << humedad
              << "\tPresion: " << presion
              << std::endl;

}

Client::Client(int id) {
    this->id = id;
}