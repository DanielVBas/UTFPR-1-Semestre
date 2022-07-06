#include <stdio.h>

int main(void)
{
    int numero, teve_resto, achou_numero = 0;

    // utilizando for para tornar o incremento da variavel mais facil
    for (int i = 20; !achou_numero; i++)
    {
        teve_resto = 0;

        for (int j = 1; j <= 20; j++)
        {
            if (i % j != 0)
            {
                teve_resto = 1;
                break;
            }
        }

        if (!teve_resto)
        {
            achou_numero = 1;
            numero = i;
        }
    }

    printf("O MMC de 1 a 20 é %d\n", numero);

    return 0;
}