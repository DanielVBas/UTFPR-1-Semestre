#include <stdio.h>

int main(){

    int chico = 10;
    int i;


    for(i=0;i<chico;i++){
            printf("1loop\n");
        while(0){

            printf("2loop\n");
            i++;

            if(i>5){
                break;
            }
        }
        break;
    }

    return 0;
}