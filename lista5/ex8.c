#include <stdio.h>

int main(){

    int m,d,i,aux;


    for(i=1000;i<=9999;i++){

        m=i/100;
        d= i%100;

        aux=m+d;

        if(aux*aux==i){
            printf("%d\n",i);

        }



    }








    return 0;
}
