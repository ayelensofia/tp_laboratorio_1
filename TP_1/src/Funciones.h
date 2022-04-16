/*
 * Funciones.h
 *
 *  Created on: 4 abr. 2022
 *      Author: Ayu
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>
#include "Gets.h"
/// @brief Muestra un menu de opciones
///
/// @param mensaje que muestra la primera opcion del menu que cuenta con un especifico formato
/// @param mensaje que muestra la segunda opcion del menu que cuenta con un especifico formato
/// @param mensaje que muestra las opciones restantes y que cuenta con un formato especifico
/// @param cantidad de kilometros ingresados por el usuario
/// @param precio del vuelo Aerolineas ingresado por el usuario
/// @param precio del vuelo Latam ingresado por el usuario
/// @param opcion seleccionada por el usuario
/// @return devuelve la opcion seleccionada por el usuario

int Menu(char[],char[],char[],float,float,float,int);

/// @brief  Calcula un descuento
///
/// @param precio ingresado por el usuario
/// @param porcentaje que se descontara
/// @return devuelve 0 sino pudo calcular sino retorna el precio final con el descuento
float CalcularDescuento(float,float);

/// @brief Calcula un interes
///
/// @param precio ingresado por el usuario
/// @param porcentaje del interes que se cobrara
/// @param el tiempo estipulado para cancelar un pago
/// @return devuelve 0 sino pudo calcular sino retorna el interes final
float CalcularInteres(float,float,int);

/// @brief Calcula el valor en bitcoin de una cierta cantidad de dinero en pesos
///
/// @param precio ingresado por el usuario
/// @param valor en pesos de un bitcoin
/// @param valor en bitcoin
/// @return devuelve 0 sino pudo calcular sino retorna valor en bitcoin de la cantidad de dinero en pesos ingresada
float CalcularBitcoin(float,float,int);

/// @brief Calcula el precio de un km
///
/// @param kms ingresados por el usuario
/// @param precio de vuelo ingresado por el usuario
/// @param un kilometro
/// @return devuelve 0 sino pudo calcular sino retorna el precio de un kilometro
float CalcularPrecioUnitario(float,float,float);

/// @brief Calcula la diferencia de precio entre vuelos
///
/// @param precio del primer vuelo
/// @param precio del segundo vuelo
/// @return devuelve 0 sino pudo calcular sino retorna la diferencia de precio entre vuelos
float CalcularDiferenciaPrecio(float,float);

/// @brief Imprime resultados
///
/// @param kilometros ingresados por el usuario
/// @param precio del vuelo Aerolineas
/// @param precio del vuelo Latam
/// @param descuento del vuelo Latam
/// @param descuento del vuelo Aerolineas
/// @param interes del vuelo Aerolineas
/// @param interes del vuelo Latam
/// @param bitcoin Aerolineas
/// @param bitcoin Latam
/// @param precio unitario Latam
/// @param precio unitario Aerolineas
/// @param diferencia de precio
/// @return devuelve un 0 sino pudo imprimir resultados, 1 si pudo imprimir
int MostrarOperaciones(float,float,float,float,float,float,float,float,float,float,float,float);


#endif /* FUNCIONES_H_ */
