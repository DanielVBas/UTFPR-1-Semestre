#include <stdio.h>

void veri(int n){

int i=0;
    while(n !=1){
        i+=1;

        if(n%i==0){
            n/=i;

            if(i>5){
                printf("0");
                break;
            }
        }

    }
    if(n==1 && i<6)printf("1");
}

int main(){
    int n;
    printf("Digite o numero que deseja verificar se eh regular:\n");
    scanf("%d",&n);
    veri(n);
}