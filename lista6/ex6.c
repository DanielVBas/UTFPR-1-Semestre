#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int n,chute=0, tentativas=0;

    srand(time(NULL));
    n= rand()%500;
    printf("%d",n);

    while(chute != n){

        printf("Digite o seu chute:\n");
        scanf("%d",&chute);

        if(chute>n){

            printf("O numero magico eh menor que %d\n",chute);
            tentativas++;
        }
        if(chute<n){

            printf("O numero magico eh maior que %d\n",chute);
            tentativas++;
        }
    }

    if(tentativas<=3){
        printf("a");
    }
    else if(tentativas>3 && tentativas<=6){
        printf("b");
    }
    else if(tentativas>6 && tentativas<=10){
        printf("c");
    }
    else if(tentativas>10){
        printf("d");
    }

    return 0;

}