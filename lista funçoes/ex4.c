
#include <stdio.h>
int calcula_digito_verificador(int num){
    int centena = num / 100, 
        dezena = (num / 10) % 10, 
        unidade = num % 10, 
        digito_verificador = ((centena * 1 + dezena * 2 + unidade * 3) % 11) % 10;

    return digito_verificador;
}

int main(void){
    int numero, digito_verificador;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numero);

    digito_verificador = calcula_digito_verificador(numero);

    printf("O digito verificador de %d é %d\n", numero, digito_verificador);

    return 0;
}

