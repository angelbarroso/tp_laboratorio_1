/*
 * funciones.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Angel Barroso
 */
#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"
#define BITCOIN 4606954.55


int menu(float km) {
	int opcion;
	printf("1 Ingresar Kilómetros: km = %.2f\n\n",km);
	printf("2 Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z) \n\n");
	printf("3 Calcular todos los costos: \n");
	printf("a) Tarjeta de débito (descuento 10 porciento)\n");
	printf("b) Tarjeta de crédito (interés 25 porciento)\n");
	printf("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
	printf("d) Mostrar precio por km (precio unitario)\n");
	printf("e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n");
	printf("4 Informar Resultados \n");
	printf("Latam\n");
	printf("a) Precio con tarjeta de débito:\n");
	printf("b) Precio con tarjeta de crédito:\n");
	printf("c) Precio pagando con bitcoin :\n");
	printf("d) Precio unitario:\n\n");
	printf("Aerolineas\n");
	printf("a) Precio con tarjeta de débito:\n");
	printf("b) Precio con tarjeta de crédito:\n");
	printf("c) Precio pagando con bitcoin :\n");
	printf("d) Precio unitario:\n\n");
	printf("la diferencia de precio es :\n\n");
	printf("5-Carga forzada de datos \n");
	printf("6-salir\n");

	printf("ingrese una opcion: ");
	scanf("%d", &opcion);

	return opcion;
}

float descuentoDebito(float precio) {

	float descuentoTotal;
	float descuentoDebito;

	descuentoDebito = (precio * 10) / 100;
	descuentoTotal = precio - descuentoDebito;

	return descuentoTotal;
}

float interesCredito(float precio1) {

	float interesTotal;
	float interesCredito;

	interesCredito = (precio1 * 25) / 100;
	interesTotal = precio1 + interesCredito;

	return interesTotal;
}

float calculoBitcoin(float precio2) {
	float pagoBitcoin;

	pagoBitcoin = precio2 / BITCOIN;

	return pagoBitcoin;
}

float precioUnitario(float precioVuelo, float kilometros) {
	float valorKm;

	valorKm = precioVuelo / kilometros;

	return valorKm;
}

float diferenciaPrecio(float precioA, float precioL) {
	float difPrecio;

	difPrecio = precioA - precioL;

	return difPrecio;
}
float ingresarKilometros(){
	float km;
	int aux;
	printf("km: \n");
	aux= scanf("%f", &km);
	while(km<=0 || aux==0){
		fflush(stdin);
		printf("ingrese nuevamente los kilometros: \n");
		scanf("%f", &km);
		aux=km;
	}
	return km;
}
