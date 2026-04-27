#include <stdio.h>

long long int fib(int n){
    long long int f[61];
    f[0] = 0;
    f[1] = 1;
    for(int i=2;i<=n;i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}
int main(){
    int n;    
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d", &num);
        printf("Fib(%d) = %lld\n", num, fib(num));
    }
    return 0;
}