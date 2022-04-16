/*
 * Gets.c
 *
 *  Created on: 4 abr. 2022
 *      Author: Ayu
 */
#include "Gets.h"

int Get_Int(char mensaje[],char error[],int entero,int entero_NoAdmitido)
{
	int retorno;

	retorno = 0;

	printf("%s", mensaje);
	scanf("%d",&entero);


	while(entero < entero_NoAdmitido || entero == entero_NoAdmitido)
	{
		printf("%s",error);
		scanf("%d",&entero);

	}

	if(entero > entero_NoAdmitido)
	{
		retorno = entero;
	}

	return retorno;
}

float Get_Float(char mensaje[],char error[],float flotante,float flotante_NoAdmitido)
{
	float retorno;

		retorno = 0;

		printf("%s", mensaje);
		scanf("%f",&flotante);

		while(flotante < flotante_NoAdmitido || flotante == flotante_NoAdmitido)
		{
			printf("%s",error);
			scanf("%f",&flotante);

		}

		if(flotante > flotante_NoAdmitido)
		{
			retorno = flotante;
		}

		return retorno;
}

char Get_Char(char mensaje[],char error[],char caracter ,char caracterNoAdmitido1,char caracterNoAdmitido2)
{

	printf("%s",mensaje);
	fflush(stdin);
	scanf("%c",&caracter);

	while(caracter != caracterNoAdmitido1 && caracter != caracterNoAdmitido2)
	{
		printf("%s",error);
		fflush(stdin);
		scanf("%c",&caracter);
	}

	return caracter;
}


