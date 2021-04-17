/*
 * funciones.c
 *
 *  Created on: 13 abr. 2021
 *      Author: TECNOSET
 */


#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>




int menu(int x, int y,int flagA,int flagB)
{


    int opc;

    printf("*****Calculadora*****Salcedo Tomas 1A\n\n");

    if(flagA == 0) //si no se ingreso el primer operando.
    {

        printf("1)Ingrese 1er operando (A=x)\n");


    }
    else //si el primer operando fue ingresado. lo muestro en pantalla
   {
     printf("1)Ingrese 1er operando. Actual(A=%d)\n",x);

   }


    if(flagB == 0) // si no fue ingresado el segundo operando
    {
        printf("2)Ingrese 2do operando (B=y)\n");


    }
    else //si fue ingresado lo muestro en pantalla.
    {

        printf("2)Ingrese 2do operando.Actual(B=%d)\n",y);

    }

    printf("3)Calcular todas las operaciones\n");
    printf("4)Mostrar resultados\n");
    printf("5)Salir\n\n");

    printf("Ingrese una opcion: ");
    scanf("%d",&opc);

    return opc;

}


void errorOperandos()
{
    printf("\nError.Ingrese los operandos primero\n\n");

}



void mostrarResultados(int x,int y, int suma,int resta,int multiplicacion,float division, int factorialA, int factorialB)
{

    printf("\na)La suma entre %d y %d es: %d\n",x,y,suma);
    printf("b)La resta entre %d y %d es: %d\n",x,y,resta);

    if(y == 0) //Si el segundo operando es 0 , advierto que no se puede dividir por 0.
    {
        printf("Error.No se puede dividir por 0\n");

    }
    else{ //si el segundo operando no es 0 , muestro el resultado de la division.

        printf("c)La division entre %d y %d es: %.2f\n",x,y,division);

        }


    printf("d)La multiplicacion entre %d y %d es: %d\n",x,y,multiplicacion);


    if(x > 12 || x < 0) //analiza si el primer operando es mayor a 12 o menor a 0
    {
        printf("Error.El numero a factorizar es mayor a 12 y menor 0\n");

    }
    else //si el primer operando no es mayor a 12 o menor a 0 muestro el factorial.
    {

        printf("e)El factorial de %d es:%d\n",x,factorialA);

    }

    if(y > 12 || y < 0) // analiza que el segundo operador no sea mayor a 12 o menor a 0
    {

        printf("Error.El numero a factorizar es mayor a 12 o menor a 0\n\n\n");


   }
    else //si el segundo operador no es mayor a 12 y menor a 0 muestro el factorial
    {

       printf("f)El factorial de %d  es: %d\n\n\n",y,factorialB);
   }



}


int sumar(int x, int y)
{
    return x + y;
}

int restar(int x, int y)
{
    return x - y;

}

int multiplicar(int x, int y)
{
    return x * y;

}

float dividir(int x, int y)
{

    float resultado;

    resultado=(float) x / y;

    return resultado;
}

int factorizar(int x)
{
    int resultado = 1;


for(int i=x; i > 0; i--)
{
    resultado= resultado * i;

}

    return resultado;
}

int pedirOperando(int x)
{
    printf("\nIngrese el operando: ");
    scanf("%d",&x);


    return x;
}

