#include <stdio.h>

int main(){

    float chico = 1.5,ze= 1.1;
    int i;


    for(i=0;ze<chico;i++){

        chico += 0.02;
        ze += 0.03;

    }

    printf("Sera necessario %d anos para Ze ser maior que chico.",i);

    return 0;
}