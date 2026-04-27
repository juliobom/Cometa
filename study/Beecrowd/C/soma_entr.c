#include <stdio.h>

int somador(int x1,int x2){
    if(x2<x1){
        int aux=x2;
            x2=x1;
            x1=aux;
    }
    int soma=0;
    for(int i=x1+1;i<x2;i++){
        if(i%2!=0){
            soma+=i;
        }
    }
    return soma;

}


int main(){
    int x1,x2,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&x1,&x2);
        int res = somador(x1,x2);
        printf("%d\n",res);
    }

}