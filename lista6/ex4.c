#include <stdio.h>

void main(){
    int n1, n2, i = 1, maior, menor;

    printf("Informe dois numeros: ");
    scanf("%d %d", &n1, &n2);

    if(n1 >= n2){
        maior = n1;
        menor = n2;
    } 
    else{
        maior = n2;
        menor= n1;
    }


    while((maior * i) % menor != 0){
        i++;
    }
    printf("O MMC eh %d", maior * i);
    return 0;
}