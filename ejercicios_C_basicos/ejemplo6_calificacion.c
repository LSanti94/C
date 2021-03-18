#include <stdio.h>
int main()
    {
        int nota1, nota2, nota3, promedio;
        printf("Ingrese la nota1: ");
        scanf("%i",&nota1);
        printf("Ingrese la nota2: ");
        scanf("%i",&nota2);
        printf("Ingrese la nota3: ");
        scanf("%i",&nota3);
        promedio=(nota1+nota2+nota3)/3;
        if(promedio>=20){
            printf("Aprobo");}
            else{
            if(promedio>=14){
            printf("Paso");}
        
            else{
            printf("Reprobo");
        }
          }
            getchar();
            return 0;
    }
