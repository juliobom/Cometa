#include <stdio.h>

void hexa(int n){
    printf("%X\n", n);
}


int main(){
    int n;
    scanf("%d", &n);
    hexa(n);
    return 0;
}