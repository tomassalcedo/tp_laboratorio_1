#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"

#define TAM 1000

#define CANTHARDCODE 5




int main()
{


    char confirma = 'n';
    int proximoId=1000;


    eEmployee lista[TAM];


inicializarEmpleados(lista,TAM);
hardcodearEmpleados(lista,CANTHARDCODE);

do
{

    switch(menu())
    {

    case 1:

        if(altaEmpleado(&proximoId,lista,TAM))
        {
            printf("Alta exitosa\n");
        }
        else{
            printf("Hubo en problema en el alta\n");
        }

        system("pause");
       break;
    case 2:
        modificarEmpleado(lista,TAM);
        break;

    case 3:

        mostrarEmpleados(lista,TAM);
        system("pause");
        break;

    case 4:

        if(bajaEmpleado(lista,TAM))
        {
            printf("Baja exitosa\n");
            system("pause");
        }



        break;

    case 5:
        informar(lista,TAM);
        break;

    case 6:
          printf("Confirma salida?: ");
            fflush(stdin);
            scanf("%c",&confirma);
            break;




system("pause");

    }

}while(confirma=='n');




    return 0;
}
