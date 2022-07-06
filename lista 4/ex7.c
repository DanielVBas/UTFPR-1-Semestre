#include <stdio.h>

int main(){

    int C,total;

    printf("Quantos m³ foram gasto no mes?");
    scanf("%d",&C);

    total = 7;

    if(C>=11){
        total = total + (C-10);
        if (total > 27){
            total = 27;
        }
    }
    if(C>=31){
        total = total + (C-30)*2;
        if (total > 167){
            total = 167;
        }
    }
    if(C>100){
         total = total + (C-100)*5;
    }
    if(C<=10){
        printf("O valor da de 10 eh R$ %d\n",total);
    }
    
    printf("O valor da fatura eh R$ %d",total);


}
