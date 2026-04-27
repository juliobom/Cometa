#include <stdio.h>

int sustitui(int valor){

    if(valor<=0){
        return 1;
    }
    else{
        return valor;
    }


}

int main(){

    int vet[10];
    for(int i=0;i<10;i++){
        scanf("%d", &vet[i]);
        vet[i] = sustitui(vet[i]);
    }
    for(int i=0;i<10;i++){
        printf("X[%d] = %d\n", i, vet[i]);
    }


}