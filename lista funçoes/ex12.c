#include <stdio.h>

int verifica(int a,int b){

    while (b != 0 && a % 10 == b % 10) {
        a = a/10;
        b = b/10;
    }
    if (b == 0)printf("Mensagem A!");
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