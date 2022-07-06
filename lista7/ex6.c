#include <stdio.h>

int main(){

    int n,m,ant=0,a=0,b=0,c=0;

    printf("Quantos numeros tera a sequencia?\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        printf("Qual o %d numero?\n",i);
        scanf(" %d",&m);

        if(ant<m || i==1){

            a++;
        }
        if(ant>m || i==1) {
            
            b++;
        }
        else{

            c++;
        }


        ant=m;

    }

    if(a==n){
        printf("a");
    }
    else if(b==n){
        printf("b");
    }
    else{
        printf("c");
    }



    return 0;
}