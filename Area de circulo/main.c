#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main (){
    float radio;
    float area;

    printf ("Ingrese el valor del radio: \n");
    scanf ("%f", &radio);

    area = radio*radio*PI;

    printf ("El area del circulo es: %.2f", area);

}