#include <stdio.h>

typedef struct{
    int p1,p2;
}posicao;


void duasomas(int* nums, int numsSize, int target, int* ret) {
    
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(i!=j){
                if((nums[i]+nums[j])==target){
                    ret[0] = i;
                    ret[1] = j;
                }
            }
        }
    }


}

int main(){

    int vet[3]={3,2,1},val=3;
    
    

    int res[2] = duasomas(vet, 3, val, res);

    printf("%d\n%d\n",res[0],res[1]);

}
