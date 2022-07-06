#include <stdio.h>

int main(){

    float a,b,c;

    printf("Digite os 3 lados do triangulo:\n");
    scanf("%f %f %f",&a,&c,&c);

    if ((a + b < c && a + c < b && b + c < a)){

        if(a ==b && b==c){

            printf("O triangulo eh equilatero");
        }
        else if(a==b && b!=c || a==c && c!=b || b==c && c!=a){

            printf("O triangulo eh isosceles");

        }
        else if(a != b && a!=b && b!=c){

            printf("O triangulo eh escaleno");
        }
    }
    else{
        printf("Essas medidas nao formam um triangulo");
    }




    return 0;
}