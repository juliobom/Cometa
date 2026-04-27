#include <stdio.h>

void pares(int n){
    if(n>100)return;
    
    if(n%2==0){
        printf("%d\n", n);
    }
    pares(n+1);
    
}


int main(){

    pares(1);


}