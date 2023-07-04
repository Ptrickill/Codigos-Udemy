#include <stdio.h>
#include <stdlib.h>

int main(){

    char cadena[100] = "Hola esto es una cadena\n";
    char cadena1[100];

    printf("%s", cadena);
    printf("Ingresa un texto:\n");
    gets(cadena1);
    printf("%s", cadena1);
}