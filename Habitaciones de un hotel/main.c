#include <stdio.h>
#include <stdlib.h>

int main(){

    int informacion[3][4]={{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int suma_temp_baja=0, suma_temp_media=0, suma_temp_alta=0;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(j==1){
                suma_temp_baja = suma_temp_baja + informacion[i][j];
            }
            if(j==2){
                suma_temp_media = suma_temp_media + informacion[i][j];
            }
            if(j==3){
                suma_temp_alta = suma_temp_alta + informacion[i][j];
            }
        }
    }
        float prom_baja = suma_temp_baja/3;
        float prom_media = suma_temp_media/3;
        float prom_alta = suma_temp_alta/3;
        printf("El promedio de la temporada baja es de %.2f\nEl de la temporada media es de %.2f\nEl de temporada alta es de %.2f", prom_baja,prom_media,prom_alta);
    
}