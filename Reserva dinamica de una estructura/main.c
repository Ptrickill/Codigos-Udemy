#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[10];
    float precio;
};

int main(){

    struct producto *prod;

    prod = malloc(sizeof(struct producto));

    printf("Intruduce el codigo: \n");
    scanf("%d", &prod->codigo);
    printf("Ingrese la descripcion:\n");
    scanf("%s", prod->descripcion);
    printf("Ingrese el precio:\n");
    scanf("%f", &prod->precio);

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion: %s\n",prod->descripcion);
    printf("Precio: %.2f\n", prod->precio);

    free(prod);
    prod=NULL;

}
