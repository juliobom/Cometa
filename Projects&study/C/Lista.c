#include <stdio.h>

int main(){
    int a[10],b[7],c[7];

    int i=0;
    printf("Digite os numeros do vetor a:\n");
    scanf("%d",&a[i]);
    while(a[i])
    {
        i++;
        scanf("%d",&a[i]);
    }
    int Ta=i;

    int k=0;
    printf("Digite os numeros do vetor b:\n");
    scanf("%d",&b[k]);
    while(b[k])
    {
        k++;
        scanf("%d",&b[k]);
    }
    int Tb=k;
    int j=0;
    for(i=0;i<Ta;i++)
    {
        for(k=0;k<Tb&&a[i]!=b[k];k++);
        if(k<Tb)
        {
            c[j]=a[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d ",c[i]);
    }

}