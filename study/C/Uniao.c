#include <stdio.h>

int main(){
    int a[5],b[4],c[9];
    int i=0;
    printf("Digite os numeros do vetor a:\n");
    scanf("%d",&a[i]);
    while(a[i])
    {
        c[i]=a[i];
        i++;
        scanf("%d",&a[i]);
        
    }
    int Ta=i;
    printf("i = %d\n",i);
    int k=i,j=0;
    printf("Digite os numeros do vetor b:\n");
    scanf("%d",&b[j]);
    while(b[j])
    {
        j++;
        scanf("%d",&b[j]);
    }
    int Tb=j;
    for(j=0;j<Tb;j++)
    {
        for(i=0;i<Ta&&b[j]!=a[i];i++);
        if(i<Ta);
        else{
            c[k]=b[j];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }


}