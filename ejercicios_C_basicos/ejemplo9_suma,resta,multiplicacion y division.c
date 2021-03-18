#include<stdio.h>
int main()
{
 int numerox, numeroy, suma, resta, multiplicacion, division;
    printf("Ingrese el númerox: ");
    scanf("%i",&numerox);
    printf("Ingrese el númeroy: ");
    scanf("%i",&numeroy);
    suma=numerox+numeroy;
    resta=numerox-numeroy;
    multiplicacion=numerox*numeroy;
    division=numerox/numeroy;
    printf("Mostrar la suma total: ");
    printf("%i",suma);
    printf("\n");
    printf("Mostrar la resta total: ");
    printf("%i",resta);
    printf("\n");
    printf("Mostrar la multiplicacion total: ");
    printf("%i",multiplicacion);
    printf("\n");
    printf("Mostrar la division total: ");
    printf("%i",division);
    printf("\n");
    getchar();
    return 0; 
}
