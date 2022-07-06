#include <stdio.h>

int main(){

    int x,y;
    int tx=432, ty = 468;

    printf("Digite as coordenadas x e y que a bola caiu:\n");
    scanf("%d %d",&x,&y);

    if(x<= tx && y<=ty && x>=0 &&y>=0){

        printf("d");
        
    }
    else{
        printf("f");
    }



    return 0 ;
}