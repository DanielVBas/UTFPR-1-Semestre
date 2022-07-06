#include <stdio.h>

int main(){
    int n1, n2, qtd, c, contcresc = 1, contcrescmax = 1;
    printf("Quantos numeros deseja digitar?");
    scanf("%d", &qtd);

    printf("Digite um numero para iniciar a sequencia:");
    scanf("%d", &n1);

    for(c = 0; c < qtd - 1; c++)
    {
        printf("Digite um numero:");
        scanf("%d", &n2);
        if(n2 > n1) contcresc++;
        else
        {
            if(contcresc > contcrescmax) contcrescmax = contcresc;
            contcresc = 1;
        }

        n1 = n2;
    }

    printf("O maior segmento de numeros crescentes tem valor %d.", contcrescmax);

    return 0;

}
