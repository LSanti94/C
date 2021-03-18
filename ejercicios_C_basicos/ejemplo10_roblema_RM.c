// 
//Ayer Tomás compró una camiseta de 15 euros y una mochila de 23 euros, pero le hicieron un descuento y, en total, solo pagó 35 euros. ¿Cuánto descuento le hicieron?
#include<stdio.h>
int main(){
    char comprador[20]="Tomás";
    int descuento, n=15, n2=23, totalsuma, totalpagado=35;
//    printf("Ingrese el número 15: ");
//    scanf("%i",&n15);
//    printf("Ingrese el número 23: ");
//    scanf("%i",&n23);
    totalsuma=n+n2;
//  totalsuma=totalsuma+n;
    descuento=totalsuma-totalpagado;
    printf("Muestrame el descuento: ");
    printf("%i",descuento);
    printf("\n");
    printf("%s",comprador);
//    printf("%i",totalsuma); 
//    printf("\n");
//    printf("El total de la suma se restara con el pago de 38: ");

//    printf("%i",&resta);

//    printf("Sumamos la camiseta y mochila: ");
//    scanf("%i",&suma);
//    printf("Restar la camiseta y mochila: ");
//    scanf("%i",&resta);
//    resta=n15-n23;
//    printf("Suma total: ");
//    scanf("%i",&total);
//    total=n15+n23-total;
    getchar();
    return 0;
}
