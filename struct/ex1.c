#include <stdio.h>
typedef struct {
    int horas;
    int minutos;
    int segundos;
}Tempo;

int main(){

    int segundos;
    Tempo t;

    printf("Digite o numero de segundos:\n");
    scanf("%d",&segundos);



    t.horas = segundos/3600;
    t.minutos = (segundos%3600)/60;
    t.segundos = (segundos%3600)%60;


    printf("%02d:%02d:%02d",t.horas,t.minutos,t.segundos);

    return 0;

}
