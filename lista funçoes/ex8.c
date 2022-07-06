#include <stdio.h>
void determinaValores(int n){

    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            for(int l=1;l<n;l++){
                if(i+j+l==n)printf("%d+%d+%d=%d\n",i,j,l,n);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    determinaValores(n);
}