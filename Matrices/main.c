#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int matriz[3][2]={{0,2},{2,3},{4,5}};

    matriz[2][0]=19;

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("[%d] ",matriz[i][j]);
        }
        printf("\n");
    } 
}