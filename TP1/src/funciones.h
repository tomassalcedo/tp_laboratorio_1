/*
 * funciones.h
 *
 *  Created on: 13 abr. 2021
 *      Author: TECNOSET
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_



#endif /* FUNCIONES_H_ */


/** \brief funcion que mostrara el menu de opciones
 *
 * \param x int primer operando
 * \param y int segundo operando
 * \param flagA int flag para saber si se ingreso el primer operando
 * \param flagB int flag para saber si se ingreso el segundo operando
 * \return int retorna la opcion seleccionada
 *
 */
int menu(int x, int y,int flagA,int flagB);




/** \brief funcion que advierte el error por no ingresar operandos
 *
 * \return void
 *
 */
void errorOperandos();




/** \brief funcion que muestra los resultados de las operaciones
 *
 * \param x int primer operando
 * \param y int segundo operando
 * \param suma int donde se guarda el resultado de la suma
 * \param resta int donde se guarda el resultado de la resta
 * \param multiplicacion int donde se guarda el resultado de la multiplicacion
 * \param division float donde se guarda el resultado de la division
 * \param factorialA int donde se guarda el resultado del primer factorial
 * \param factorialB int donde se guarda el resultado del segundo factorial
 * \return void
 *
 */
void mostrarResultados(int x,int y, int suma,int resta,int multiplicacion,float division, int factorialA, int factorialB);




/** \brief funcion que realiza la suma de dos enteros
 *
 * \param x int primer operando
 * \param y int segundo operando
 * \return int retorna el resultado
 *
 */
int sumar(int x, int y);




/** \brief funcion que realiza la resta de dos enteros
 *
 * \param x int primer operando
 * \param y int segundo operando
 * \return int retorna el resultado
 *
 */
int restar(int x, int y);




/** \brief funcion que multiplica dos enteros
 *
 * \param x int primer operando
 * \param y int segundo operando
 * \return int retorna el resultado
 *
 */
int multiplicar(int x, int y);




/** \brief funcion que divide dos enteros
 *
 * \param x int primer operando
 * \param y int segundo operando
 * \return float retorna el resultado
 *
 */
float dividir(int x, int y);




/** \brief funcion que calcula el factorial de un entero
 *
 * \param x int entero a factorizar
 * \return int retorna el resultado
 *
 */
int factorizar(int x);




/** \brief funcion que pide el ingreso de un entero
 *
 * \param x int donde se guarda el entero ingresado
 * \return int retorno el entero ingresado
 *
 */
int pedirOperando(int x);
