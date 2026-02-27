#include <stdio.h>

int main(void){

    int a;
    scanf("%d", &a);
    for(int j=0; j<a; j++){

    int n1,n2,d1,d2,dr,nr,drs,nrs, nrp, drp;
    char op;

    scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);
     
    switch(op){
        case '+':
            nr=n1*d2 + n2*d1;
            dr=d1*d2;
            break;
        case'-':
            nr=n1*d2 - n2*d1;
            dr=d1*d2;
            break;
        case'*':
            nr=n1*n2;
            dr=d1*d2;
            break;nr=n1*n2;
            dr=d1*d2;
            break;
        case '/':
            nr=n1*d2;
            dr=d1*n2;
            break;
    }
    

    // na simplificacao faremos uma repeticao do menor valor e iremos tentar dividir pra resto '0' caso n ser possivel irar para o proximo numero meno (-1) e assim por diante, ate chegar no numero '1' ou encontrar um numero que divida ambos os numeros sem deixar resto

    
    nrs=nr;
    drs=dr;

    if(nr<0){
        nrp=nr*(-1);
    }
    else if(dr<0){
        drp=dr*(-1);
    }

    if(nrp<drp){
        for(int i=nrp; i>1;i--){
            if(nrs%i==0 && drs%i==0){
                nrs=nrs/i;
                drs=drs/i;
            }
        }
    }
    else{
        for(int i=drp; i>1;i--){
            if(nrs%i==0 && drs%i==0){
                nrs=nrs/i;
                drs=drs/i;
            }
        }
    }
    
    printf("%d/%d = %d/%d\n", nr, dr, nrs, drs);

    }

}