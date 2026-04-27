#include <stdio.h>

long long fatoriador(int Fat){
    for(int i=Fat-1; i>0; i--){
        Fat *= i;
    }
    return (long long)Fat;
}


int main(){
    int Fat;
    scanf("%d", &Fat);

    printf("%lld\n", fatoriador(Fat));



}