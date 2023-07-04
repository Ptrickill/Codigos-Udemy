#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *f;
    f = fopen ("numeros.txt","r");
    int suma=0, num;

    while(feof(f)==0){
        fscanf(f,"%d", &num);
        suma=suma+num;
    }

    printf("La suma de todos los numeros del fichero es: %d\n", suma);

    fclose(f);
}