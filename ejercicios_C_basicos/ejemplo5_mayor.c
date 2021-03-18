#include<stdio.h>
int main()
{
    int numA, numB;
        printf("Ingresar el numA: ");
        scanf("%i",&numA);
        printf("Ingrese el numB: ");
        scanf("%i",&numB);
        if(numA>numB){
            printf("Es mayor numA : ");
            printf("%i",numA);
        }
        else{
            printf("Es mayor numB: ");
            printf("%i",numB);
        }
        getchar();
        return 0;
}
