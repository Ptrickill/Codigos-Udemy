#include <stdio.h>
#include <stdlib.h>

int main(){

    char cadena[100];
    char cadena1[100];
    char cadena2[100];
    char cadena3[100];
    
        printf("Ingrese un texto:\n");
        gets(cadena);
        printf("Ingrese un texto:\n");
        gets(cadena1);
        printf("Ingrese un texto:\n");
        gets(cadena2);
        printf("Ingrese un texto:\n");
        gets(cadena3);

        printf("%s-%s-%s-%s", cadena,cadena1,cadena2,cadena3);
}