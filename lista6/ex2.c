#include <stdio.h>

int main(){

    int positivo=0;
    float n=0,soma=0,media;



    while(n!=-1000){
        printf("Digite umo numero:\n");
        scanf(" %f",&n);
        
        if(n>0){
            positivo++;
            soma += n;
            media = soma/positivo;
        }

    }
    printf("Foram %d positivos\n",positivo);
    printf("A media eh %.1f",media);
    return 0;
}