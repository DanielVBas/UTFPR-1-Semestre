#include <stdio.h>

int main(){

    int n=1,i=1,divisores=0;

    while(n!=0){

        i++;
        divisores=0;

        for(int j=1;j<=20;j++){

            if(i%j!=0){
                n=i;
                divisores=1;
                break;
            }
        }
        if(divisores!=1){
                n=i;
                break;
            }
               
    }
    printf("O menor numero eh %d",i);





    return 0;
}