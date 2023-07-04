#include <stdio.h>
#include <stdlib.h>

int main(){

    struct hora_entrada{
        int hora;
        int minuto;
    };

    struct entrada{
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };

    struct entrada el;
    char continuar = 'S';

    while(continuar=='S'){
        printf("Ingrese la hora de entrada:\n");
        scanf("%d", &el.hora1.hora);
        printf("Ingrese el minuto de entrada:\n");
        scanf("%d", &el.hora1.minuto);
        printf("Ingrese el numero de asistentes:\n");
        scanf("%d", &el.asistentes);

        int total=0;
        for(int i=0; i<el.asistentes;i++){
            int edad;
            printf("Ingrese la edad del asistente %d\n", i+1);
            scanf("%d", &edad);
            if(edad<6){
                total = total+0;
            }
            else if (edad >=6 && edad<=15){
                total = total +5;
            }
            else if(edad>=16 && edad<=26 || edad > 65){
                total = total +8;
            }
            else{
                total = total +10;
            }
        }

        if(el.asistentes>=5){
            el.precio=total-total*0.1;
        }
        else{
            el.precio=total;
        }

        printf("Hora de entrada del grupo %d\n", el.hora1.hora);
        printf("Minuto de entrada del grupo %d\n",el.hora1.minuto);
        printf("El precio total a pagar es de %.2f\n", el.precio);
        printf("Quiere continuar con otro grupo? (S/N): \n");
        scanf("%c", &continuar);

        while(continuar=='\n'){
            scanf("%c", &continuar);
        }
    }
    printf("Hasta la proxima...\n");
}