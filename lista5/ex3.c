#include <stdio.h>

int main(){


    int x,y,i=0,aux;

    printf("Digite 2 numeros inteiros:\n");
    scanf("%d %d",&x,&y);

    for(aux= y +1;aux<x;aux++){

        if(aux%2==1){
        i++;
        }

    }
    printf("%d",i);



    return 0;
}
