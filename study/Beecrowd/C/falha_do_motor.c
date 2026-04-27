#include <stdio.h>

int falhando(int *vet, int tam){
    for(int i=0;i<tam;i++){
        if(i>0){
            if(vet[i]<vet[i-1]){
                return (i+1);                
            }
        }
    }
    return 0;
}

int main(){

    int n;
    scanf("%d", &n);
    int vetor[n];
    for(int i=0;i<n;i++){
        scanf("%d", &vetor[i]);
    }
    int falha = falhando(vetor, n);

    printf("%d\n", falha);
}