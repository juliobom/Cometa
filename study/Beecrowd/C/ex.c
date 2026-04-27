#include <stdio.h>

int parimpr(int n,int j1, int j2, int r, int a){

    
    int res=j1+j2;
    switch (n) {  //qual paridade o jogador 1 

        case 1:  //escolheu par
            switch (r) {
                case 1:  //ele roubou
                    if(a==0){//jogador dois n acusou
                        return 1;
                    }
                    else{
                        return 2;;      
                    }                    
                break;
                case 0:  //ele n roubou
                    if(a==0){  //jogador dois n acusou o roubo
                        if(res%2==0){
                            return 1;
                        }else{
                            return 2;
                        }
                    }
                    else{
                        return 1;
                    }
                break;                
            }
        break;
        case 0: //escolheu impar
            switch (r) {
                case 1:  //ele roubou
                    if(a==0){//jogador dois n acusou
                        return 1;
                    }
                    else{
                        return 2;;      
                    }                    
                break;
                case 0:  //ele n roubou
                    if(a==0){  //jogador dois n acusou o roubo
                        if(res%2!=0){
                            return 1;
                        }else{
                            return 2;
                        }
                    }
                    else{
                        return 1;
                    }
                break;                
        }
        }
    return 0;
}

int main() {
    int a,j1,j2,p,r;
    scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);

    int resultado = parimpr(p,j1,j2,r,a);
    if(resultado == 1){
        printf("Jogador 1 ganha!\n");
    }
    else{
        printf("Jogador 2 ganha!\n");
    }
    
}