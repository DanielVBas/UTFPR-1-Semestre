#include <stdio.h>

int main(){

    int m,result,verifi,aux;

    printf("Digite o numero natural");
    scanf("%d",&m);

    result = m*m*m;

    for(int i =1;i<result;i+=2){

        verifi = 0;
        aux=i;

        for(int j=0;j<=m;j++){

            verifi +=aux;
            aux +=2;
        }

        if(verifi==result){
            aux=i;
            break;
        }

    for (int i = 0; i < m; i++, aux += 2){
        printf("%d ", aux);
    }


    }



    return 0;
}