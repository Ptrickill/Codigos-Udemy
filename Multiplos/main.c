#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 1;

    for(numero=1;numero<100;numero++){
        if(numero%3==0){
            printf("%i\n",numero);
        }
    }
}