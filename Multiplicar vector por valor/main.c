#include <stdio.h>
#include <stdlib.h>

void multiplicacion (int *vector, int n_elementos, int num);

int main(){

    int vector[10] = {1,2,3,4,5,6,7,8,9,10};

    multiplicacion (&vector[0],10,3);

    for(int i=0;i<10;i++){
        printf("%d ",vector[i]);
    }


}

void multiplicacion (int *vector, int n_elementos, int num){
    for(int i=0;i<n_elementos;i++){
        *(vector+i) = *(vector+i) * num;

    }
}