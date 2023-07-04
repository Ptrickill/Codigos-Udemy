#include <stdio.h>
#include <stdlib.h>

int main(){

    float euros;

    printf ("Ingrese la cantidad de Euros que desea convertir: \t");
    scanf ("%f", &euros);

    // pesetas = euros * 166.386
    printf ("%.2f Euros equiovalen a %.2f pesetas", euros, euros*166.386);


}