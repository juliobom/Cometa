#include <stdio.h>

int soma(int primeiro, int segundo){
    int soma = 0;
    for(int i=primeiro+1;i<segundo;i++){
        if(i%2!=0|| i%2!= -0){
            soma += i;
        }
    }
    return soma;
}
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a > b){
        int aux = a;
        a = b;
        b = aux;
    }
    printf("%d\n", soma(a,b));
}