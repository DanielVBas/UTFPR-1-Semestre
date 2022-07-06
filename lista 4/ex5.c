#include <stdio.h>

int main(){

    float A,G,Ra,Rg,Pg,Pa;

    printf("Qual o preço do litro de alcool?");
    scanf("%f", &A);

    printf("Qual o preço do litro de Gasolina?");
    scanf("%f", &G);

    printf("Qual o rendimento (km/l) do carro utilizando alcool");
    scanf("%f", &Ra);

    printf("Qual o o rendimento (km/l) do carro utilizando gasolina");
    scanf("%f", &Rg);


    Pa = A/Ra;
    Pg= G/Rg;

    if(Pg <=Pa){

        printf("G");
    }
    else{
        printf("A");
    }


    return 0;
}