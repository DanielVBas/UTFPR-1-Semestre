#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int cod;
    int tel;
    float preco;
} Eletro;

void preencheStruct (Eletro ricardo[])
{
    for(int c = 0; c < 15; c++)
    {
        ricardo[c].preco = (rand()/(float) RAND_MAX) * 1000;
        ricardo[c].cod = rand() % 1000000;
        ricardo[c].tel = rand() %100000000;
    }
}
float media(Eletro* ricardo){

    float soma=0;

    for (int i=0;i<15;i++){

        soma +=ricardo[i].preco;
    }

    return soma/15;
}
void imprime(Eletro* ricardo, float media){

    printf("%f\n",media);
    for( int i=0;i<15;i++){

        if(media>ricardo[i].preco){
        printf("Telefone: %d ",ricardo[i].tel);
        printf("Preço: %.2f\n",ricardo[i].preco);
        }
    }



}

int main()
{
    srand(time(NULL));
    float med;

    Eletro ricardo[15];
    preencheStruct (ricardo);

    med = media(ricardo);
    imprime(ricardo,med);

}
