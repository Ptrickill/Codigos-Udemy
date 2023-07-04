#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia;

    printf("Ingrese un numero:\n");
    scanf("%i", &dia);

    switch(dia){
        case 1: 
        printf("Lunes");
        break;
        case 2: 
        printf("Martes");
        break;
        case 3: 
        printf("Miercoles");
        break;
        case 4: 
        printf("Jueves");
        break;  
        case 5: 
        printf("Viernes");
        break;
        case 6: 
        printf("Sabado");
        break;
        case 7: 
        printf("Domingo");
        break;
        default: 
        printf("Error");
        break;
    }
}