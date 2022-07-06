#include <stdio.h>
void converteHora(int segundos, int *hora, int *min, int *seg){

    int aux;
    *hora= segundos/3600;
    aux=segundos%3600;
    *min=aux/60;
    aux=aux%60;
    *seg=aux;
}

int main(){
    int segundos,h,m,s;
    int *hora,*min,*seg;
    printf("Digite o numero de segundos:");
    scanf("%d",&segundos);

    converteHora(segundos,&hora,&min,&seg);

    printf("%02d:%02d:%02d",hora,min,seg);

}