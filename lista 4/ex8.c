#include <stdio.h>

int main(void)
{
    int a, b, c, h, l;

    printf("Digite as dimensoes da caixa separadas por espacos (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Digite as dimensoes da janela separadas por espacos (h l): ");
    scanf("%d %d", &h, &l);

    if ((h >= a && l >= b) || (h >= a && l >= c) || (h >= b && l >= c) || (h >= b && l >= a) || (h >= c && l >= a) || (h >= c && l >= b)){
        printf("S");
    }
    else{
        printf("N");
    }
    
    return 0;
}