
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "ArrayEmployees.h"
#include "DataWareHouse.h"


void mostrarEmpleado(eEmployee x)
{


    printf("%d %10s%10s   %.2f      %d\n\n",x.id,x.name,x.lastName,x.salary,x.sector);

}


void inicializarEmpleados(eEmployee vec[],int tam)
{

    for(int i=0 ; i < tam ; i++)
    {

        vec[i].isEmpty=1;

    }



}

int menu()
{

    int opcion;


system("cls");
printf("*****ABM Empleados*****Salcedo Tomas 1A\n\n");

printf("1. Alta Empleado\n");
printf("2. Modificar Empleado\n");
printf("3. Ver Empleados\n");
printf("4. Baja Empleados\n");
printf("5. Informes\n");
printf("6. Salir\n\n");

printf("Ingrese opcion: ");
fflush(stdin);
scanf("%d",&opcion);

return opcion;


}


void hardcodearEmpleados(eEmployee vec[],int cant)
{

     for(int i=0; i < cant;i++){


        vec[i].id = ids[i];
        strcpy(vec[i].name, nombres[i]);
        strcpy(vec[i].lastName,apellidos[i]);
        vec[i].salary = sueldos[i];
        vec[i].sector = sectores[i];
        vec[i].isEmpty=0;


    }

}


    void mostrarEmpleados(eEmployee vec[], int tam)
    {


        int flag=0;
    printf("*****Listado de Empleados*****\n\n");
    printf("id      Nombre    Apellido    Sueldo   Sector\n\n");

    for(int i=0; i < tam; i++){


        if(vec[i].isEmpty==0)
        {
            mostrarEmpleado(vec[i]);
            flag=1;

        }

    }

  if(flag==0){
    printf("\nNo hay empleados que mostrar\n\n");
  }




    }



int bajaEmpleado(eEmployee vec[],int tam)
{
    int todoOk=0;
    int indice;
    int id;
    char confirma;

    system("cls");
    printf("*****Baja Empleado*****\n\n");
    mostrarEmpleados(vec,tam);
    printf("Ingrese id: ");
    scanf("%d",&id);

    indice= buscarEmpleado(id,vec,tam);

    if(indice== -1)
    {
        printf("No hay registro de un empleado con el id: %d.Reintentelo: \n",id);

        system("pause");

    }
    else{
        mostrarEmpleado(vec[indice]);
        printf("\nConfirma baja?: ");
        fflush(stdin);
        scanf("%c",&confirma);
        if(confirma=='s')
        {
            vec[indice].isEmpty=1;
            todoOk=1;

    }

    else{
        printf("Se ha cancelado la operacion\n\n");

    }


    }



return todoOk;
}






int buscarLibre(eEmployee vec[], int tam)
{



    int indice= -1;

    for(int i=0; i < tam ; i++)
    {
        if(vec[i].isEmpty==1)
        {
            indice=i;
            break;


        }


}
return indice;
}



int altaEmpleado(int* idx,eEmployee vec[],int tam)
{


    int todoOk=0;


    int indice;




    eEmployee auxEmployee;

    if(vec != NULL && tam >0 && idx !=NULL)
    {
        indice=buscarLibre(vec,tam); //asigno en indice el indice libre

    }


    system("cls");
    printf("*****Alta Empleados*****\n\n");

    if(indice== -1)
    {
        printf("Sistema Completo\n\n");
    }
    else
    {


        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(auxEmployee.name);



        printf("Ingrese Apellido: ");
        fflush(stdin);
        gets(auxEmployee.lastName);

        printf("Ingrese sueldo: ");
        scanf("%f",&auxEmployee.salary);



        printf("\n\nIngrese ID del sector: ");
        scanf("%d",&auxEmployee.sector);


         auxEmployee.id = *idx;

        auxEmployee.isEmpty=0;

        *idx = *idx + 1;

        vec[indice]=auxEmployee;
        todoOk=1;



    }
    return todoOk;



}


int subMenuMod()
{

    int opcion;



printf("\n\n*****Modificar Empleado*****\n\n");

printf("1. Modificar Nombre\n");
printf("2. Modificar Apellido\n");
printf("3. Modificar Sueldo\n");
printf("4. Modificar Sector\n");
printf("5. Salir\n\n");

printf("Elija una opcion: ");
scanf("%d",&opcion);


    return opcion;


}


int buscarEmpleado(int id, eEmployee vec[], int tam)
{


    int indice= -1;

    for(int i=0; i < tam; i++)
    {
        if(vec[i].id==id && vec[i].isEmpty==0)
        {
            indice=i;
            break;

        }

    }
    return indice;






}





void modificarEmpleado(eEmployee vec[],int tam)
{


    char confirma= 'n';
    char nuevoNombre[51];
    char nuevoApellido[51];
    float nuevoSalario;
    int nuevoSector;
    int id;
    int indice;



    do{

    system("cls");
        switch(subMenuMod())
        {


        case 1:
            system("cls");
            mostrarEmpleados(vec,tam);

            printf("Ingrese id: ");
            scanf("%d",&id);

            indice=buscarEmpleado(id,vec,tam);

            if(indice== -1)
    {

        printf("No hay registro de un empleado con el id: %d\n",id);

    }

    else{
            printf("id      Nombre    Apellido    Sueldo   Sector\n\n");

            mostrarEmpleado(vec[indice]);
            printf("Ingrese nuevo nombre: ");
            fflush(stdin);
            gets(nuevoNombre);

            strcpy (vec[indice].name, nuevoNombre);

            break;



    }

        case 2:
            printf("Ingrese id: ");
            scanf("%d",&id);

            indice=buscarEmpleado(id,vec,tam);

            if(indice== -1)
    {

        printf("No hay registro de un empleado con el id: %d\n",id);

    }
    else
    {
            printf("id      Nombre    Apellido    Sueldo   Sector\n\n");

            mostrarEmpleado(vec[indice]);
            printf("Ingrese nuevo apellido: ");
            fflush(stdin);
            gets(nuevoApellido);

            strcpy(vec[indice].lastName , nuevoApellido);

            break;




    }

        case 3:
            printf("Ingrese id: ");
            scanf("%d",&id);
            indice=buscarEmpleado(id,vec,tam);

            if(indice== -1)
    {

        printf("No hay registro de un empleado con el id: %d\n",id);

    }
    else{
          printf("id      Nombre    Apellido    Sueldo   Sector\n\n");

        mostrarEmpleado(vec[indice]);
            printf("Ingrese nuevo Sueldo: ");

           scanf("%f",&nuevoSalario);
           vec[indice].salary = nuevoSalario;

            break;

    }
        case 4:
            printf("Ingrese id: ");
            scanf("%d",&id);
            indice=buscarEmpleado(id,vec,tam);

            if(indice== -1)
    {

        printf("No hay registro de un empleado con el id: %d\n",id);

    }
       else
       {
           printf("id      Nombre    Apellido    Sueldo   Sector\n\n");

            mostrarEmpleado(vec[indice]);
            printf("Ingrese nuevo Sector: ");

           scanf("%d",&nuevoSector);
           vec[indice].sector = nuevoSector;

            break;



       }


        case 5:
            printf("Confirma salida?: \n");
        fflush(stdin);
        scanf("%c",&confirma);











break;


    }


}while(confirma=='n');

}







int menuInformes()
{
    int opcion;


    system("cls");
    printf("****Informar****\n\n");
    printf("1_Listado de los empleados ordenados alfabeticamente por Apellido y Sector\n");
    printf("2_Total y promedio de los salarios, y cuantos empleados superan el salario promedio\n");
    printf("3_Salir\n\n");

    printf("Elija una opcion: ");
    scanf("%d",&opcion);


    return opcion;
}



int ordenarEmpleados(eEmployee vec[],int tam,int orden)
{
int todoOk=0;

    eEmployee auxEmployee;

    if(vec != NULL && tam > 0 && (orden==1 || orden == 0))
    {

    if(orden == 1)
    {

        for(int i = 0; i < tam - 1; i++)
        {

            for(int j= i + 1; j < tam ; j++)
            {

                if(vec[i].sector > vec[j].sector)
                {

                    auxEmployee = vec[i];
                    vec[i] = vec[j];
                    vec[j] = auxEmployee;
                    todoOk=1;


                }
                else if(vec[i].sector == vec[j].sector && strcmp(vec[i].lastName,vec[j].lastName)>0 )
                {

                    auxEmployee = vec[i];
                    vec[i] = vec[j];
                    vec[j] = auxEmployee;
                    todoOk=1;


                }




            }






        }


    }







        }








return todoOk;
}


void totalSalarios(eEmployee vec[] ,int tam)
{

    float promedio;
    int contador=0;
    float total=0;
    int contadorEmployee=0;


    for(int i=0 ; i < tam ; i++)
    {

        if(vec[i].isEmpty==0)
        {



        total+= vec[i].salary;
        contador++;

        }



    }





    promedio= (float) total / contador;



     for(int i=0; i < tam;i++)
    {
        if(vec[i].isEmpty==0 && vec[i].salary > promedio)
        {




            contadorEmployee++;
        }
        }






    printf("\n***Sueldos Totales***\n");

    printf("%.2f\n" ,total);

    printf("\n***Sueldo Promedio***\n");
    printf("%.2f\n\n",promedio);


    printf("***Empleados que superan el sueldo promedio***\n");
    printf("%d\n\n",contadorEmployee);

}






void informar(eEmployee vec[],int tam)
{

    char confirma= 'n';



    do{

        switch(menuInformes())
        {

        case 1:

            ordenarEmpleados(vec,tam,1);
            mostrarEmpleados(vec,tam);
            system("pause");
            break;

        case 2:
            totalSalarios(vec,tam);
            system("pause");
            break;

        case 3:


        printf("Confirma salida?: \n");
        fflush(stdin);
        scanf("%c",&confirma);





        }







    }while(confirma=='n');






}

