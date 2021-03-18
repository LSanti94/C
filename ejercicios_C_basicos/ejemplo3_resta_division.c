#include<stdio.h>

int main()
{
    double resta, division, numeroA, numeroB;
    printf("Añada el numeroA");
    scanf("%d",&numeroA);
    printf("Añada el numeroB");
    scanf("%d",&numeroB);
    resta=numeroA-numeroB;
    division=numeroA/numeroB;
    printf("Se resta los siguientes numeros");
    printf("%d",resta); //print mostrar, scan digitar o insertar
    printf("\n");
    printf("Se divide los siguientes numeros");
    printf("%d",division);
    getchar();
    return 0;
}
