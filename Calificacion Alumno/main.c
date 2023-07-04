#include <stdio.h>
#include <stdlib.h>

int main (){

    float nota;

    printf ("Ingrese su calificacion:\n");
    scanf ("%f", &nota);

    if(nota<5){
        printf ("Usted ha suspendido");
    }
    else if (nota==5){
        printf ("SU nota es suficiente");
    } 
    else if (nota==6){
        printf ("Su nota es buena");
    } 
    else if (nota==7 || nota==8){
        printf ("Notable");
    }
    else if (nota==9 || nota==10){
        printf ("Sobresaliente");
    }
    else if (nota<0 || nota>10){
        printf ("Usted ingreso una calificacion invalida");
    }
}

