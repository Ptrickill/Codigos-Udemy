#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Ingrese un numero:\n");
    scanf("%d", &num);

    FILE *f;
    f = fopen("tabla.txt","w");

    for(int i=0;i<=10;i++){
        fprintf(f,"%d\n",i*num);
    }

    fclose(f);
}