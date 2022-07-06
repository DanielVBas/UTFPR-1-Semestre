#include <stdio.h>

int main(){

    int senha=0;



    while(senha!=2002){
        printf("Digite a senha:\n");
        scanf(" %d",&senha);
        
        if(senha!=2002){
            printf("Senha invalida\n");
        }

    }
    printf("Acesso Permitido\n");
    return 0;
}

