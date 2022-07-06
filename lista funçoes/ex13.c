#include <stdio.h>

int verifica(int a,int b){

    int maior,menor;
    if(a>b){
        menor = b;
        maior = a;
    }
    else{
        menor = a;
        maior = b; 
    }

    while (menor != 0 && maior % 10 == menor % 10) {
        maior = maior/10;
        menor = menor/10;
    }
    if (menor == 0)printf("%d eh segmento de %d",menor,maior);
    else printf("Mensagem B!");
    return 0;   
}
int main(){
    int a, b,ver;
    printf("Digite dois numeros:");
    scanf("%d %d", &a, &b);
    verifica(a,b);
    return 0;   
}