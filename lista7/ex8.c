#include <stdio.h>

int main(){

    int n,verifica,ver,i=0;

    printf("Digite o numero para verificar se seus digitos sao iguais\n");
    scanf("%d",&n);

   while(i<1000){

        verifica= n/i;
        ver = n%10;
        printf("%d %d",ver, verifica);
        if(verifica!=ver){
            printf("Todos os digitos do numero %d nao sao iguais \n",n);
            break;

        }

        i++;
    }




    return 0;
}