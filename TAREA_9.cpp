/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 15/0/2022			
	programa que ACEPTE COMO ENTRADA EL PRECIO 
	*/
#include <stdio.h>

int main(){
	//declarar variables
	float areaCasaColonial, areaCasaEntradaDividida, areaSolaPlanta, baseSoloPlanta, baseEntradaDividida, baseColonial;
	float precioUnitarioColonial,precioUnitarioEntradaDividida,precioUnitarioSolaPlanta;
	
	
	printf("introduce el precio de casa colonial:");
	scanf("%f",&baseColonial);
	printf("introduce el area de casa colonial:");
	scanf("%f",&areaCasaColonial);
	
	
	printf("introduce el precio de entrada dividida:");
	scanf("%f",&baseEntradaDividida);
	printf("introduce el area de entrada dividida:");
	scanf("%f",&areaCasaEntradaDividida);
	
	
	printf("introduce el precio de solo planta:");
	scanf("%f",&baseSoloPlanta);
	printf("introduce el area de solo planta:");
	scanf("%f",&areaSolaPlanta);
	
	//proceso
	precioUnitarioColonial=baseColonial/areaCasaColonial;
	precioUnitarioEntradaDividida=baseEntradaDividida/areaCasaEntradaDividida;
	precioUnitarioSolaPlanta=baseSoloPlanta/areaSolaPlanta;
	
	printf("PRECIO DE CASA COLONIAL:%f\n",precioUnitarioColonial);
	printf("PRECIO DE ENTRADA DIVIDIDA:%f\n",precioUnitarioEntradaDividida);
	printf("PRECIO DE UNA SOLA PLANTA:%f\n\n\n",precioUnitarioSolaPlanta);
	
	
	if(precioUnitarioColonial<=precioUnitarioEntradaDividida&&precioUnitarioColonial<=precioUnitarioSolaPlanta){
	printf("la casa colonial es la mas barata %f",precioUnitarioColonial);
	}
	if(precioUnitarioEntradaDividida<=precioUnitarioSolaPlanta&&precioUnitarioEntradaDividida<=precioUnitarioColonial){
	printf("la casa de entrada dividida es la mas barata %f",precioUnitarioEntradaDividida);
	}
	if(precioUnitarioSolaPlanta<=precioUnitarioColonial &&precioUnitarioSolaPlanta<=precioUnitarioEntradaDividida){
	printf("\n la casa de una sala planta es la mas barata %f",precioUnitarioSolaPlanta);
	}

	return 0;
}

