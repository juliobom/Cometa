#include <stdio.h>

int nivel(int number){

    int velocidade, maior =0;
    for(int i=0;i<number;i++){
        scanf("%d",&velocidade);
        if(velocidade>maior){
            maior = velocidade;
        }
    }
    return maior;
}


int main(){
    int numOfLesmas;
    while(scanf("%d", &numOfLesmas) != EOF){
        int level = nivel(numOfLesmas);
        if(level<10){
            printf("1\n");
        }
        else if(level<20){
            printf("2\n");
        }
        else{
            printf("3\n");
        }

    }


}