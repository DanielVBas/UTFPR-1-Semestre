#include <stdio.h>
float calculaIMC(float altura, float peso){

    return peso/(altura*altura);

}

void mostraIMC(float imc){

    if(imc<18.5)printf("Voce esta abaixo do peso.");
    else if(imc<25)printf("Voce esta com o peso normal.");
    else if(imc<30)printf("Voce esta acima do peso.");
    else printf("Voce esta obeso.");
}

int main(){
    float peso, altura,imc;

    printf("Digite a altura e o peso para o calculo;\n");
    scanf("%f %f",&altura,&peso);
    

    imc=calculaIMC(altura,peso);

    printf("O IMC eh %f\n",imc);
    mostraIMC(imc);
    return 0;

}