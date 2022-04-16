/*
 ============================================================================
 Name        : TP_1_angelBarroso.c
 Author      : angel barroso
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"
#define INGRESOKILOMETROS 1
#define INGRESOPRECIOS 2
#define CALCULO 3

int main(void) {
	setbuf(stdout, NULL);
	int flag = 0;
	char salir = 's';
	float kilometros = 0;
	float precioAerolineas;
	float precioLatam;
	float descDebitoAerolineas;
	float descDebitoLatam;
	float interesCreditoAerolineas;
	float interesCreditoLatam;
	float pagoBitcoinAerolineas;
	float pagoBitcoinLatam;
	float valorKmAerolineas;
	float valorKmLatam;
	float diferenciaValor;

	float precioAerolineasF = 162965;
	float kilometrosF = 7090;
	float precioLatamF = 159339;
	float descDebitoAerolineasF;
	float descDebitoLatamF;
	float interesCreditoAerolineasF;
	float interesCreditoLatamF;
	float pagoBitcoinAerolineasF;
	float pagoBitcoinLatamF;
	float valorKmAerolineasF;
	float valorKmLatamF;
	float diferenciaValorF;

	do {

		switch (menu(kilometros)) {

		case 1:
			kilometros = ingresarKilometros();
			flag = INGRESOKILOMETROS;

			break;

		case 2:
			if (flag == INGRESOKILOMETROS) {
				printf("Aerolineas Argentinas: ");
				scanf("%f", &precioAerolineas);

				printf("Latam: ");
				scanf("%f", &precioLatam);
				flag = INGRESOPRECIOS;
			} else {
				printf("primero debe ingresar los kilometros\n");
			}

			break;

		case 3:
			if (flag == INGRESOPRECIOS) {
				descDebitoAerolineas = descuentoDebito(precioAerolineas);

				interesCreditoAerolineas = interesCredito(precioAerolineas);

				pagoBitcoinAerolineas = calculoBitcoin(precioAerolineas);

				valorKmAerolineas = precioUnitario(precioAerolineas,
						kilometros);

				descDebitoLatam = descuentoDebito(precioLatam);

				interesCreditoLatam = interesCredito(precioLatam);

				pagoBitcoinLatam = calculoBitcoin(precioLatam);

				valorKmLatam = precioUnitario(precioLatam, kilometros);

				diferenciaValor = diferenciaPrecio(precioAerolineas,
						precioLatam);

				flag = CALCULO;
			} else if (flag == INGRESOKILOMETROS) {
				printf("primero debe ingresar los precios\n");
			} else {
				printf("primero debe ingresar los kilometros\n");
			}

			break;

		case 4:
			if (flag == CALCULO) {
				printf("KMs ingresados : %.2f Km\n\n", kilometros);

				printf("precio Aerolineas: $ %2.f\n", precioAerolineas);
				printf("a) precio con tarjeta de debito: $ %.2f\n",
						descDebitoAerolineas);
				printf("b) precio con tarjeta de credito: $ %.2f\n",
						interesCreditoAerolineas);
				printf("c) precio pagando con bitcoin:  %f BTC\n",
						pagoBitcoinAerolineas);
				printf("d) precio unitario: $ %.2f\n\n", valorKmAerolineas);

				printf("precio Latam: $ %.2f\n", precioLatam);
				printf("a) precio con tarjeta de debito: $ %.2f\n",
						descDebitoLatam);
				printf("b) precio con tarjeta de credito: $ %.2f\n",
						interesCreditoLatam);
				printf("c) precio pagando con bitcoin:  %f BTC\n",
						pagoBitcoinLatam);
				printf("d) precio unitario: $ %.2f\n\n", valorKmLatam);

				printf("la diferencia de precio es: $ %.2f", diferenciaValor);

				flag = 0;
			} else {
				printf("primero debemos realizar los calculos\n");
			}
			break;

		case 5:
			descDebitoAerolineasF = descuentoDebito(precioAerolineasF);

			interesCreditoAerolineasF = interesCredito(precioAerolineasF);

			pagoBitcoinAerolineasF = calculoBitcoin(precioAerolineasF);

			valorKmAerolineasF = precioUnitario(precioAerolineasF, kilometrosF);

			descDebitoLatamF = descuentoDebito(precioLatamF);

			interesCreditoLatamF = interesCredito(precioLatamF);

			pagoBitcoinLatamF = calculoBitcoin(precioLatamF);

			valorKmLatamF = precioUnitario(precioLatamF, kilometrosF);

			diferenciaValorF = diferenciaPrecio(precioAerolineasF,
					precioLatamF);

			printf("KMs ingresados : %.2f Km\n\n", kilometrosF);

			printf("precio Aerolineas: $ %2.f\n", precioAerolineasF);
			printf("a) precio con tarjeta de debito: $ %.2f\n",
					descDebitoAerolineasF);
			printf("b) precio con tarjeta de credito: $ %.2f\n",
					interesCreditoAerolineasF);
			printf("c) precio pagando con bitcoin:  %f BTC\n",
					pagoBitcoinAerolineasF);
			printf("d) precio unitario: $ %.2f\n\n", valorKmAerolineasF);

			printf("precio Latam: $ %.2f\n", precioLatamF);
			printf("a) precio con tarjeta de debito: $ %.2f\n",
					descDebitoLatamF);
			printf("b) precio con tarjeta de credito: $ %.2f\n",
					interesCreditoLatamF);
			printf("c) precio pagando con bitcoin:  %f BTC\n",
					pagoBitcoinLatamF);
			printf("d) precio unitario: $ %.2f\n\n", valorKmLatamF);

			printf("la diferencia de precio es: $ %.2f", diferenciaValorF);

			break;

		case 6:
			printf("confirma salida:  ?");
			scanf("%c", &salir);
			break;
		default:
			printf("opcion invalida, intente nuevamente\n");

		}

		system("pause");

	} while (salir == 's');

	return EXIT_SUCCESS;
}

