/*
 * prototipos.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Angel Barroso
 */

#ifndef PROTOTIPOS_H_
#define PROTOTIPOS_H_

int menu(float km);

/// @brief
///
/// @return
float ingresarKilometros();
/// @brief aplica un descuento del 15%
///
/// @param recibe precio del vuelo.
/// @return retorna precio final con el descuento aplicado.


float descuentoDebito(float precio);

/// @brief aplica interes del 25%
///
/// @param recibe precio del vuelo.
/// @return retorna precio final con el interes aplicado.
float interesCredito(float precio1);

/// @brief calcula el valor del vuelo en BITCOIN
///
/// @param recibe el precio del vuelo.
/// @return retorna el valor del viaje en valor BITCOIN
float calculoBitcoin(float precio2);

/// @brief calcula valor del viaje por kilometro.
///
/// @param recibe el valor del vuelo
/// @param recibe la cantidad de kilometros
/// @return retorna el precio por kilometro.
float precioUnitario(float precioVuelo, float kilometros);

/// @brief calcula la diferencia de precio entre dos flotantes
///
/// @param recibe el precio de vuelo
/// @param recibe el precio de vuelo
/// @return retorna la diferencia entre los nuemeros ingresados.
float diferenciaPrecio(float precioA, float precioL);

#endif /* PROTOTIPOS_H_ */
