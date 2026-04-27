#include <stdio.h>
#include <string.h>

long unsigned int conversor(long int n){
    char str[100];
    sprintf(str, "%lu", n);
    for(int i=0; i<(strlen(str))/2;i++){
        char temp = str[i];
        str[i] = str[strlen(str)-1-i];
        str[strlen(str)-1-i] = temp;
    }
    return 0;
    long unsigned int result = str - '0';
    return result;
}


int main(){

    long int n;
    printf("%ld\n", conversor(n));
}