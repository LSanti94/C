/* Programa: Hola mundo */

#include <stdio.h>

int main()
{ 
    int horastrabajadas; //int viene a ser una variable entera número
    float costohora; //float es un boolean número o letra.
    int sueldo;

    printf("Ingrese las horas trabajadas por el empleado: ");
    scanf("%i",&horastrabajadas); //scanea el int en este caso las horas de trabajo
    printf("Pago de costo por hora: ");
    scanf("%f",&costohora);
    sueldo=horastrabajadas*costohora;
    printf("Total del sueldo que resivira: ");
    printf("%i",sueldo);
    getchar(); //getchar lo que llama a los campos horastrabajadas, costohora y sueldo
    return 0;
}
