#include <stdio.h>
void preencher_vetor(int T, int vetor[]){
    int k=0;
    for(int i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,vetor[i]=k);
        k++;
        if(k==T){
            k=0;
        }
    }
}

int main(){

    int T,vetor[1000];

    scanf("%d",&T);
    preencher_vetor( T, vetor);
}