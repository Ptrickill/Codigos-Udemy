#include <stdio.h>
#include <stdlib.h>

int main (){

    float precio;
    float km;
    int consumo;
    float preciofinal;

    printf("Ingrese el precio base del vehiculo:\n");
    scanf("%f", &precio);
    printf("Ingrese el numero de Km:\n");
    scanf("%f", &km);
    printf("Ingrese el consumo:\n");
    scanf("%i", &consumo);

    if(km<20000 && consumo<=5){
        preciofinal=precio*1.2;       
    } 
    else if(km>20000 && consumo<=5){
        preciofinal=precio*1.1;  
    }
    else if(consumo>5){
        preciofinal=precio*1.05;
    }
    printf("El precio total a pagar es de %.2f", preciofinal);
}