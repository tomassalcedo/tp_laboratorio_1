#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "utn.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.bin (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.bin (modo binario).
    10. Salir
*****************************************************/

/** \brief muestra el menu principal
 *
 * \param opcion int* pasa por referencia la opcion elegida por el usuario
 * \return void
 *
 */

void menu(int* option);

int main()
{

	setbuf(stdout,NULL);
    int option = 0;
    char confirm = 'n';
    int flag = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();

    do
    {
        do
        {
            menu(&option);
            switch(option)
            {
            case 1:
                if(flag == 0)
                {
                    controller_loadFromText("data.csv",listaEmpleados);
                    flag = 1;
                }
                else
                {
                    printf("\nYa se cargaron los datos desde el archivo data.bin\n");
                }
                break;
            case 2:
                if(flag == 0)
                {
                    controller_loadFromBinary("data.bin",listaEmpleados);
                    flag = 1;
                }
                else
                {
                    printf("\nYa se cargaron los datos desde el archivo data.csv\n");
                }
                break;
            case 3:
                controller_addEmployee(listaEmpleados);
                break;
            case 4:
                controller_editEmployee(listaEmpleados);
                break;
            case 5:
                controller_removeEmployee(listaEmpleados);
                break;
            case 6:
                controller_ListEmployees(listaEmpleados);
                break;
            case 7:
                controller_sortEmployee(listaEmpleados);
                controller_ListEmployees(listaEmpleados);
                break;
            case 8:
                controller_saveAsText("data.csv",listaEmpleados);
                break;
            case 9:
                controller_saveAsBinary("data.bin",listaEmpleados);
                break;
            case 10:
                printf("Confirma salida del programa? ");
                fflush(stdin);
                scanf("%c",&confirm);
                break;
            }
            printf("\n");
            system("pause");
            system("cls");
        }
        while(confirm != 's');
    }
    while(option != 10);

    ll_deleteLinkedList(listaEmpleados);
    return 0;
}

void menu(int* option)
{
    printf("\n");
    printf("1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n");
    printf("2. Cargar los datos de los empleados desde el archivo data.bin (modo binario).\n");
    printf("3. Alta de empleado\n");
    printf("4. Modificar datos de empleado\n");
    printf("5. Baja de empleado\n");
    printf("6. Listar empleados\n");
    printf("7. Ordenar empleados\n");
    printf("8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n");
    printf("9. Guardar los datos de los empleados en el archivo data.bin (modo binario).\n");
    printf("10. Salir\n");
    utn_getEntero(option,3,"Ingrese una opcion: ","ERROR. Opcion invalida\n",1,10);
}
