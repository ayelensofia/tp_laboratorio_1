/*
 ============================================================================
 Name        : Trabajo_Practico1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "Funciones.h"
#include "Gets.h"

int main(void)
{
	setbuf(stdout,NULL);
	float kilometros;
	float precio_aerolineas;
	float precio_latam;
	float descuento_aerolineas;
	float descuento_latam;
	float interes_aerolineas;
	float interes_latam;
	float bitcoin_aerolineas;
	float bitcoin_latam;
	float precioUnitarioLatam;
	float precioUnitarioAerolineas;
	float diferenciaPrecio;
	int opcion;
	int opcionSubMenu;
	int flag_pudoCalcular;




	flag_pudoCalcular = 0;

	kilometros = 0;
	precio_aerolineas = 0;
	precio_latam = 0;

	do
	{

		opcion = Menu("1.Ingresar kilometros","\n2.Ingresar precio de vuelos:","\n3.Calcular todos los costos\n4.Informar resultados\n5.Carga forzada de datos\n6.Salir\nIngrese opcion: ",kilometros,precio_aerolineas,precio_latam,opcion);
		switch(opcion)
		{
			case 1:

				kilometros = Get_Float("Ingrese kilometros: ","Reingrese kilometros: ",kilometros,0);

				break;
			case 2:
				do
				{
					opcionSubMenu = Get_Int("1.Ingresar precio del vuelo Aerolineas: \n2.Ingresar precio de vuelos Latam: \n3.Salir\nIngrese opcion: ","Ingrese opcio valida: ",opcionSubMenu,0);
					switch(opcionSubMenu)
					{
						case 1:
							precio_aerolineas = Get_Float("Ingrese precio del vuelo Aerolineas: ","Reingrese precio: ",precio_aerolineas,0);

							break;
						case 2:
							precio_latam = Get_Float("Ingrese precio del vuelo Latam: ","Reingrese precio: ",precio_latam,0);

							break;
						case 3:
							printf("Saliste del menu de vuelos\n");
							break;
						default:
							printf("Ingrese opcion valida\n");
							break;

					}

				}while(opcionSubMenu!=3);

				break;
			case 3:
				if(kilometros > 0 && precio_aerolineas > 0 && precio_latam > 0)
				{

					descuento_aerolineas = CalcularDescuento(precio_aerolineas,10);
					descuento_latam = CalcularDescuento(precio_latam,10);
					interes_aerolineas = CalcularInteres(precio_aerolineas,25,1);
					interes_latam = CalcularInteres(precio_latam,25,1);
					bitcoin_aerolineas = CalcularBitcoin(precio_aerolineas,4606954.55,1);
					bitcoin_latam = CalcularBitcoin(precio_latam,4606954.55,1);
					precioUnitarioLatam = CalcularPrecioUnitario(kilometros,precio_latam,1);
					precioUnitarioAerolineas = CalcularPrecioUnitario(kilometros,precio_aerolineas,1);
					diferenciaPrecio = CalcularDiferenciaPrecio(precio_aerolineas,precio_latam);
					printf("Calculos realizados\n");
					flag_pudoCalcular = 1;

				}
				else
				{
					printf("Ingrese todos los datos necesarios para calcular los costos\n");
				}

				break;
			case 4:

				if(kilometros > 0 && precio_aerolineas > 0 && precio_latam > 0 && flag_pudoCalcular == 1)
				{
					if(MostrarOperaciones(kilometros,precio_aerolineas,precio_latam,descuento_aerolineas,descuento_latam,interes_aerolineas,interes_latam,bitcoin_aerolineas,bitcoin_latam,precioUnitarioLatam,precioUnitarioAerolineas,diferenciaPrecio)==1)
					{
						printf("Se imprimieron los resultados exitosamente\n");

						kilometros = 0;
						precio_aerolineas = 0;
						precio_latam = 0;

						printf("\n");
					}
				}
				else
				{
					if(flag_pudoCalcular == 0 && kilometros > 0 && precio_aerolineas > 0 && precio_latam > 0)
					{
						printf("Calcule costos previamente para imprimir sus resultados\n");
					}
					else
					{
						printf("No se ingresaron todos los datos necesarios para imprimir los resultados\n");
					}


				}

				break;
			case 5:
				if(kilometros == 0 && precio_aerolineas == 0 && precio_latam == 0)
				{
					kilometros = 7090;
					precio_aerolineas =  162965;
					precio_latam = 159339;
				}
				else
				{
					printf("Ya se ingresaron datos\n");
				}
				break;
			case 6:
				printf("Fin del programa...");
				break;
			default:
				printf("Ingrese opcion valida\n");

				break;


				}



	}while(opcion != 6);



	return EXIT_SUCCESS;
}
