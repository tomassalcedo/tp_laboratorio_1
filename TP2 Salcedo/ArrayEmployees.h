#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

typedef struct{

int id;
char name[51];
char lastName[51];
float salary;
int sector;
int isEmpty;



}eEmployee;


#endif // ARRAYEMPLOYEES_H_INCLUDED



void mostrarEmpleados(eEmployee vec[], int tam);

void inicializarEmpleados(eEmployee vec[],int tam);

int menu();

void hardcodearEmpleados(eEmployee vec[],int cant);

void mostrarEmpleado(eEmployee x);

int altaEmpleado(int* idx,eEmployee vec[],int tam);

int bajaEmpleado(eEmployee vec[],int tam);

int buscarLibre(eEmployee vec[], int tam);

void informar(eEmployee vec[],int tam);

void modificarEmpleado(eEmployee vec[],int tam);

int buscarEmpleado(int id, eEmployee vec[], int tam);

int subMenuMod();

void informar(eEmployee vec[],int tam);
int menuInformes();

int ordenarEmpleados(eEmployee vec[],int tam,int orden);

void totalSalarios(eEmployee vec[] ,int tam);
