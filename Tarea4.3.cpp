/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 24/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:
  
    -Variables flotantes y enteras
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -Ciclos
    -Contador
    -Condicionales
    -Comentarios para la documentaci�n interna del programa
*/
#include<stdio.h>
int main(){
	//Declaraci�n de variables
	float i=0, pago=0, media=0,suma=0;
	do{ //Ciclo
		printf("Introduce el pago: \n");
		scanf("%f", &pago);
		if(pago > 0 ){ //Condiciones
			suma=suma+pago;
			i++;
		}	
	}while(pago != 0);
	media=(float)suma/i; 
	//Salida
	printf("\n La media del pago es %.2f", media);
	return 0;
}
