#include <stdio.h>

char bitolando(char bits[]){
    int count = 0;
    for(int i=0; bits[i] != '\0';i++){
        if(bits[i]=='1'){
            count ++;
        }
    }
    if(count%2==0){
        return '0';
    }else{
        return '1';
    }
}




int main(){
    char bits[100];
    
    scanf("%s", bits);
    printf("%s%c\n", bits,bitolando(bits));

}