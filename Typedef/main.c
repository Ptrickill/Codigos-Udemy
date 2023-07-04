#include <stdio.h>
#include <stdlib.h>

int main(){

    typedef enum {lunes,martes,miercoles,jueves,viernes,sabado,domingo} semana;

    semana dia_semana1 = lunes;

    if (dia_semana1 == 0){
        printf ("Estamos lunes");
    }else{
        printf ("No estamos lunes");
    }

}