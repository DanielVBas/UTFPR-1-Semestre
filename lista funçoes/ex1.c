#include <stdio.h>
int ehBissexto(int ano){
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) return 1;
    else return 0;
}

int main(){

    int ano,ver;
    printf("Digite o numero que dias do ano para ver se ele é bixesto\n");
    scanf("%d",&ano);

    ver =ehBissexto(ano);
    if(ver==1) printf("Eh bissexto");
    else printf("Nao eh bissexto");

    return 0;
}