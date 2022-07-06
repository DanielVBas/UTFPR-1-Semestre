#include <stdio.h>

void questao01(int *a, int *b){

    int aux;
    aux = *a + *b;
    *a = *a - *b;
    *b = aux;


}

int main(){

    int a,b;

    printf("Digite os valores de A e B\n");
    scanf("%d %d", &a,&b);

    questao01(&a, &b);

    printf("A=%d B=%d",a,b);




    return 0;
}
