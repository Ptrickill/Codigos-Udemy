#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main(){
    
    int num1, num2;
    int rsuma=0, rresta=0, rmultiplicacion=0;
    float rdivision=0;

    printf("Ingrese el primer numero:\n");
    scanf("%d", &num1); 
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &num2); 
    
    rsuma=sumar(num1, num2);
    rresta=restar(num1,num2);
    rmultiplicacion=multiplicar(num1,num2);
    rdivision=dividir(num1,num2);

    printf("Suma = %d\n", rsuma);
    printf("Resta = %d\n", rresta);
    printf("Multiplicacion = %d\n", rmultiplicacion);
    printf("Division: %.2f\n", rdivision);
}