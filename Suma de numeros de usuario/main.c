#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=1;
    int suma=0;
    float promedio=0;
    int cont=0;

    while(num!=0){
        printf("Ingrese un numero:\n");
        scanf("%i",&num);
        cont++;
        suma+=num;
        promedio=suma/cont;
    }

    printf("La suma de los numeros es %i y el promedio es %.2f", suma, promedio);
}