#include <stdio.h>
#include <stdlib.h>

int main(){

    char cadena[50];
    char caracter;

    printf("Ingrese un texto:\n");
    gets(cadena);
    printf("Ingrese un caracter:\n");
    caracter = getchar();

    int i=0;
    int pos=0;
    while(cadena[i] != '\0' && pos == 0){
        if (cadena[i]==caracter){
            pos=i;
        }
        i+=1;
    }
    if(pos !=0){
        printf("El caracter [%c] se encuentra en el texto %s en la posicion %i",caracter,cadena,pos);
    }
    else{
        printf("El caracter [%c] no se encuentra en el texto %s", caracter, cadena);
    }
}