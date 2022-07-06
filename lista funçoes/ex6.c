#include <stdio.h>
int retornaResto (int alex,int maria, int rafa){

    return (maria+alex+rafa)%3;

}
void imprimeganhador(int resto){

    if(resto==0)printf("O ganhador eh Alexandre");
    else if (resto==1)printf("O ganhador eh Maria");
    else printf("O ganhador eh Rafael");
}
int main(){

    int alex,maria,rafa,resto;
    printf("Digite os valores que O alex, A Maria e a Rafa escolheram\n");
    scanf("%d %d %d",&alex,&maria,&rafa);

    resto = retornaResto(alex,maria,rafa);
    imprimeganhador(resto);
}