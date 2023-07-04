#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int nota;
    int aprobados=0;
    int reprobados=0;

    printf("Ingrese un numero:\n");
    scanf("%i", &num);

    for(int i=1;i<=num;i++){
        printf("Ingrese la nota del alumno:\n");
        scanf("%i",&nota);
        if(nota>=6){
            aprobados++;
        }
        else{
            reprobados++;
        }
    }
    printf("La cantidad de alumnos aprobados es de %i; y la cantidad de alumnos reprobados es de %i",aprobados,reprobados);
}
