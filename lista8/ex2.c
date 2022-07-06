#include <stdio.h>
int main()
{
    int n1, n2, prod, maiorpalindromo, c, d, u;
    for(n1 = 100; n1 <= 999; n1++)
    {
        for(n2 = 100; n2 <= 999; n2++)
        {
            prod = n1 * n2;
            int U = prod % 10;
            int D = (prod % 100) / 10;
            int C = (prod % 1000) / 100;
            int UM = (prod % 10000) / 1000;
            int DM = (prod % 100000) / 10000;
            int CM = prod / 100000;

            int palindromoinvertido = (U * 100000 + D * 10000 + C * 1000 + UM * 100 + DM * 10 + CM);

            if(prod == palindromoinvertido)
            {
                if (prod > maiorpalindromo) maiorpalindromo = prod;
            }

        }
    }
    printf("O maior palindromo eh %d", maiorpalindromo);
    return 0;
}
