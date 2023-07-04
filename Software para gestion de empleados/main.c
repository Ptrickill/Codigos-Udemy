#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "persistencia.h"

int main(){

    int opcion=0;
    struct empleado empleados[100];

    printf("BIENVENIDOS AL GESTOR DE EMPLEADOS!\n");
    printf("Introduce la opcion que desee realizar:\n");
    mostrarmenu();
    scanf("%d", &opcion);

    while(opcion!=7){
        if(opcion==1){
            printf("Alta\n");
        }
        else if(opcion==2){
            printf("Baja\n");
        }
        else if(opcion==3){
            printf("Listar\n");
        }
        else if(opcion==4){
            printf("Consultar\n");
        }
        else if(opcion==5){
            printf("Sueldo\n");
        }
        else if(opcion==6){
            printf("Horas\n");
        }else if(opcion>7||opcion<1){
            printf("Ingreso una opcion incorrecta, vuelva a intentarlo\n");
        }
        mostrarmenu();
        scanf("%d", &opcion);
    }
    printf("GRACIAS POR USAR EL GESTOR DE EMPLEADOS...HASTA PRONTO!!!");
    
}