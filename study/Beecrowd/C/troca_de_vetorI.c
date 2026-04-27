#include <stdio.h>


void trocadinha(int *vetor, int tamanho){

    for(int i=0;i<tamanho/2;i++){

        int aux = vetor[i];
        vetor[i] = vetor[tamanho-1-i];
        vetor[tamanho-1-i] = aux;

    }


}

int main(){

    int vetor[20];
    for(int i=0;i<20;i++){
        scanf("%d", &vetor[i]);
    }
    trocadinha(vetor, 20);

    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }


}