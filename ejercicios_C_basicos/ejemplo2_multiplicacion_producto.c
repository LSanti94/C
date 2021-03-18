#include<stdio.h>

//#include<conio.h>

int main() //tratar que esten juntos ya que puede haber un salto y se puede hacer mas pesado.
{
    int suma, producto, numero1, numero2;
    printf("Ingrese el primer número: ");
    scanf("%i",&numero1);
    printf("Ingrese el segundo número: ");
    scanf("%i",&numero2);
    suma=numero1+numero2;
    producto=numero1*numero2;
    printf("Muestrame la multiplicación num1 y num2 ");
    printf("%i",producto);
    printf("\n"); //Dividir las lineas o un salto de línea
    printf("Muestrame la suma num1 y num2 ");
    printf("%i",suma);
//  printf("%i",producto); //cuando utilizas la & es para continuar las operaciones.
    getchar();
    return 0;
}
//resta y division
