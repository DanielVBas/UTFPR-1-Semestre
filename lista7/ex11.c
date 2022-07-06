#include <stdio.h>

int main(){

    int c,primos=0,n,ver,j,f,soma=0,quebra=0;

    printf("Qual o valor inicial?\n");
    scanf("%d",&c);

    printf("Qual ao valor final?\n");
    scanf("%d",&f);

    if(c>0 || f>0){
        printf("Valores invalidos, digite valores maiores que 0\n");
        int quebra=1;
    }

    for(int i=c;i<=f && quebra==0;i++){

        if(primos==2){
            printf("%d ",i-1);
        }

        

        primos=0;

        for(j=1;j<=i;j++){

            if(i%j==0){
                primos++;

            }

        }
               
    }





    return 0;
}