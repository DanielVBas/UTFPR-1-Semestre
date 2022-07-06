#include <stdio.h>

int main(){

    int n,i,aux=0,r=1;

    printf("Digite o valor que deseja fatorar:\n");
    scanf("%d", &n);

    for (n -1; n != 0; n--)
    {
        r *= n;
    }


    printf("%d",r);


// o ultimo resultado consistente é 31, por conta da limitação do int.





    return 0;
}
