/*
 ============================================================================
 Name        : tp1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {

setbuf(stdout, NULL);

int a=0;
    int b=0;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factorialA;
    int factorialB;
    int flagOperaciones=0; //flag para saber si las operaciones fueron realizadas
    int flagOperandoUno=0; //flag para saber si se ingreso el primer operando
    int flagOperandoDos=0; //flag para saber si se ingreso el segundo operando
    char confirma;



    do
    {    system("cls");

        switch(menu(a,b,flagOperandoUno,flagOperandoDos))
        {


        case 1:


            a=pedirOperando(a);
            flagOperandoUno=1;  //cambio el estado del flag , ya que fue ingresado el primer operando
            system("cls");
            break;


        case 2:
            b=pedirOperando(b);
            flagOperandoDos=1;  //cambio el estado del flag , ya que fue ingresado el segundo operando
             system("cls");
            break;

        case 3:

            if(flagOperandoUno== 0 || flagOperandoDos == 0)  //analiza que hayan sido ingresados los operandos.si no es asi informo el error.
            {
                errorOperandos();
                system("pause");

            }
            else
            {
                flagOperaciones=1;  // cambia el estado del flag ya que las operaciones fueron realizadas.

                suma=sumar(a,b);
                resta=restar(a,b);
                multiplicacion=multiplicar(a,b);

                if(b != 0) //analiza que el segundo operador sea distinto de 0.
                {
                    division=dividir(a,b);

                }
                else{

                    printf("\nNo se puede dividir por 0\n");

                }

                if(a > 12 || a < 0)  //analiza si el primer operador es mayor a 12 o menor a 0. si es asi informo el error
                {
                    printf("No se pudo realizar la operacion\n");
                }
                else     //si no es el caso, realizo la operacion
                {
                    factorialA=factorizar(a);

                 }

                if(b > 12 || b < 0) //analiza si el segundo operador es mayor a 12 o menor a 0. si es asi informo el error
                {
                    printf("No se pudo realizar la operacion\n");

                }
                else //si no es el caso, realizo la operacion
                {

                    factorialB=factorizar(b);
                }

                  system("cls");

                printf("\nOperaciones realizadas exitosamente\n\n\n\n\n\n");
                system("pause");
                system("cls");




            }


break;



        case 4:


             if(flagOperaciones == 0) //analiza que las operaciones hayan sido realizadas, si no lo fueron muestro el error.
            {
                printf("\nError.Realice los calculos primero (opcion 3)\n\n\n\n");

            }
            else // si las operaciones fueron realizadas , muestro los resultados.
            {

                mostrarResultados(a,b,suma,resta,multiplicacion,division,factorialA,factorialB);



            }
            system("pause");
            break;


        case 5:
            printf("\nDesea salir? : ");
            fflush(stdin);
            scanf("%c",&confirma);
                break;



        }





    }while(confirma != 's');







	return EXIT_SUCCESS;
}
