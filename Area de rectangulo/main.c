#include <stdio.h>
#include <stdlib.h>

int main (){
    float base;
    float altura;
    float area; 

    printf ("Ingrese la base y la altura de su rectangulo: \n");
    scanf ("%f %f", &base, &altura);

    area = base * altura;

    printf ("El area de su rectangulo es : %.2f\n", area);

}