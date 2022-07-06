#include <stdio.h>

int main()
{
    int testes,p1,p2,p3;
    float n1, n2, n3, media;

    printf("Entre com o numero de casos de teste: ");
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        printf("Digite os tres numeros para saber a media ponderada, digite eles : ");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

        printf("Resultado = %.3f\n", media);
    }

    return 0;
}
