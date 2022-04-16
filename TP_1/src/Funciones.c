/*
 * Funciones.c
 *
 *  Created on: 4 abr. 2022
 *      Author: Ayu
 */

#ifndef FUNCIONES_C_
#define FUNCIONES_C_
#include "Funciones.h"

int Menu(char mensaje1[],char mensaje2[],char mensaje3[],float kilometros,float aerolineas,float latam,int opcion)
{
	printf("%s(km = %.2f)",mensaje1,kilometros);
	printf("%s(Aerolineas = %.2f, Latam = %.2f)",mensaje2,aerolineas,latam);
	printf("%s",mensaje3);
	scanf("%d",&opcion);

	return opcion;
}
int MostrarOperaciones(float kmIngresados,float precio_aerolineas,float precio_latam,float descuento_latam,float descuento_aerolineas,float interes_aerolineas,float interes_latam,float bit_aerolineas, float bit_latam,float pUnitario_latam,float pUnitario_aerolineas,float diferenciaPrecio)
{
	int retorno;

	retorno = 0;

	printf("\nKms ingresados %.2f\n",kmIngresados);
	printf("\n");
	printf("Precio Latam: %.2f\n",precio_latam);
	printf("a)Precio con tarjeta de débito:%.2f\n",descuento_latam);
	printf("a)Precio con tarjeta de crédito: %.2f\n",interes_latam);
	printf("c)Precio pagando con bitcoin: %.2f\n",bit_latam);
	printf("d)Precio unitario: %.2f\n",pUnitario_latam);
	printf("\n");
	printf("Precio Aerolineas: %.2f\n",precio_aerolineas);
	printf("a)Precio con tarjeta de débito: %.2f\n",descuento_aerolineas);
	printf("b)Precio con tarjeta de crédito: %.2f\n",interes_aerolineas);
	printf("c)Precio pagando con bitcoin: %.2f\n",bit_aerolineas);
	printf("d)Precio unitario: %.2f\n",pUnitario_aerolineas);
	printf("\n");
	printf("La diferencia de precio es: %.2f\n",diferenciaPrecio);
	printf("\n");

	retorno = 1;

	return retorno;

}
float CalcularDescuento(float precio,float descuento)
{
	float precio_final;
	float retorno;

	retorno = 0;
	if(precio > 0 && descuento > 0)
	{
		precio_final = (descuento * precio)/100;

		retorno = precio_final;
	}

	return retorno;
}
float CalcularInteres(float precio,float interes,int tiempo)
{
	float interes_final;
	float retorno;

	retorno = 0;

	if(precio > 0 && interes > 0 && tiempo > 0)
	{
		interes_final = precio * interes * tiempo;
		retorno = interes_final;
	}

	return retorno;

}
float CalcularBitcoin(float precio,float pesos,int bitcoin)
{
	float retorno;
	float precio_final;

	retorno = 0;

	if(precio > 0 && pesos > 0 && bitcoin > 0)
	{
		precio_final = (float)(bitcoin * precio) / pesos;

		retorno = precio_final;
	}


	return retorno;
}
float CalcularPrecioUnitario(float kmIngresados,float precioVuelo,float km)
{
	float retorno;
	float precio_final;

	retorno = 0;

	if(precioVuelo > 0 && kmIngresados > 0 && km > 0)
	{
		precio_final = (km * precioVuelo) / kmIngresados;

		retorno = precio_final;
	}

	return retorno;
}

float CalcularDiferenciaPrecio(float precio1,float precio2)
{
	float diferencia;

	float retorno;

	retorno = 0;

	if(precio1 > 0 && precio2 > 0)
	{
		if(precio1 < precio2)
		{
			diferencia = -(precio1)+precio2;
			retorno = diferencia;
		}
		else
		{
			diferencia = -(precio2)+precio1;
			retorno = diferencia;
		}
	}


	return retorno;
}

#endif /* FUNCIONES_C_ */
