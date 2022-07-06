#include <stdio.h>

int main(void)
{
    int ano;
    printf("Para saber se um ano é bissexto, digite o numero de dias:\n");
    scanf("%d", &ano);

    if (ano % 400 == 0){
        printf("%d é um ano bissexto!");
    }
    else{
        printf("%d não é um ano bissexto!");
    }

    return 0;
}