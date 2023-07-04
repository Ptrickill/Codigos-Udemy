#include <stdio.h>
#include <stdlib.h>

int main(){

    float pesos[5];
    int cont;
    float suma=0;
    float promedio=0;
    int mas_prom=0;
    int menos_prom=0;

    for(int i=0; i<5; i++){
        printf("Introduce un peso para almacenarlo:\n");
        scanf("%f", &pesos[i]);

        suma+=pesos[i];
        promedio=suma/5;
    }

    for(int i=0; i<5; i++){
        if(pesos[i]>=promedio){
            mas_prom++;
        }
        else{
            menos_prom++;
        }
    }
    printf("El promedio de pesos es de %.2f", promedio);
    printf("Las personas que pesan mas que el promedio es de %i; y las personas que pesan menos que el promedio es de %i", mas_prom, menos_prom);

}

