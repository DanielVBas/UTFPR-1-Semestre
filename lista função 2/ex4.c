#include <stdio.h>
int divide(int *m, int *n, int d){

    if(*m%2==0 && *n%2==0){
        *m /=d;
        *n /=d;
        return 1;
    }
    else if(*m%2==0){
        *m /=d;
        return 1;
    }
    else if(*n%2==0){
        *n /=d;
        return 1;
    }
    else return 0;
}
int mmc (int m, int n){
    int mmc = 1, d = 2, teste;
    while (m > 1 || n > 1)
    {
        teste = divide (&m, &n, d);
        if (teste == 1) mmc *= d;
        d++;
    }
    return mmc;
}

int main(){

    int m,n,mmcr;
    printf("Entre com dois numeros:\n");
    scanf("%d %d",&m,&n);

    mmcr = mmc(m, n);

    printf("O mmc eh %d.", mmc);
}
