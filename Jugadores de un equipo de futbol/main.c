#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    struct jugador{
        char nombre[50];
        int edad;
        float altura;
    };

    struct jugador jugadores[5];

    for(int i=0;i<5;i++){
        printf("Ingresa el nombre del jugador %d:\n", i+1);
        gets(jugadores[i].nombre);
        printf("Ingrese la edad del jugador %d:\n", i+1);
        scanf("%d", &jugadores[i].edad);
        printf("Ingrese la altura del jugador %d:\n",i+1);
        scanf("%f", &jugadores[i].altura);

        fflush(stdin);
    }

    int opcion=0;

    while(opcion!=4){   
    printf("\nIntroduce una opcion:\n1)Listar jugador:\n2)Buscar jugador:\n3)Jugador mas alto:\n4)salir.\n");   
    scanf("%d", &opcion);
    fflush(stdin);
        if(opcion==1){
            for(int i=0;i<5;i++){
                printf("\nJugador de nombre %s y altura %.2f\n", jugadores[i].nombre, jugadores[i].altura);
            }
        }
        if(opcion==2){
            char nom[50];
            printf("\nIngrese el nombre del jugador:\n");
            gets (nom);
            int encontrado = 0;
            for(int i=0;i<5;i++){
                if(strcmp(jugadores[i].nombre,nom)==0){
                    encontrado = 1;
                    printf("\nLa edad del jugador es %d y su altura es %.2f", jugadores[i].edad, jugadores[i].altura);
                }
            }
            if(encontrado==0){
                printf("No se ha encontrado al jugador.");
            }
        }
        if(opcion==3){
            float mas_alto = jugadores[0].altura;
            char nombre_mas_alto[50];
            int edad_mas_alto = jugadores[0].edad;
            strcpy(nombre_mas_alto,jugadores[0].nombre);
            for(int i=1;i<5;i++){
                if(jugadores[i].altura>mas_alto){
                    strcpy(nombre_mas_alto,jugadores[i].nombre);
                    edad_mas_alto = jugadores[i].edad;
                    mas_alto = jugadores[i].altura;
                }
            }
            printf("\nEl nombre del jugador de mayor altura es %s y su edad es %d\n", nombre_mas_alto, edad_mas_alto);
        }
        if(opcion==4){
            break;
        }
    }
}