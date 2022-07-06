#include <stdio.h>
#define TAM 4

float media(float notas[], int n, float *menor, float *maior){
    int c, contpar = 0;
    float mediapar = 0;
    for(c = 0; c < n; c++)
    {
        if (c % 2 == 0)
        {
            mediapar += notas[c];
            contpar++;
        }
        if (notas[c] > *maior) *maior = notas[c];
        if (notas [c] < *menor) *menor = notas[c];

    }

    mediapar /= contpar;
    return mediapar;
}

int main(){
    float notas[TAM]={6.4,9.2,5.4,3.1};
    float medianotas,menor = notas[0],maior = notas[0],n;

    medianotas= media(notas,TAM,&menor,&maior);

    printf(" A media eh %.02f  e maior eh %.02f, a menor eh %.02f",medianotas,maior,menor);
    return 0;


}
