#include <stdio.h>

int main(){

    int n,i=1,j=1;
    char caracter;

    printf("Qual o caracter que vai sera  a figura do losangolo?\n");
    scanf("%c",&caracter);

    printf("Qual o numero que sera usada para fazer a largura do losangolo?\n");
    scanf("%d",&n);

    int largura=2*n+1;
    int espacos=largura/2-1,max=1;


    for(int k=1;k<largura;k++){

        for(int i=1;i<=max;i++){

            printf("%c",caracter);
            if(largura==i)break;
        }
        for(int j=1;j<largura;j++){
            printf(" ");
        }
        max+=2;
        espacos-=2;
        printf("\n");
    }

   




    return 0;
}