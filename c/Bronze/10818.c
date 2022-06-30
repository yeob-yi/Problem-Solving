#include <stdio.h>
#include <stdlib.h>

int main(void){
    int min=1000001, max=-1000001;
    int size;
    scanf("%d", &size);

    int* nums = (int*)malloc(sizeof(int)*size);
    for(int i=0; i<size; i++){
        scanf("%d", &nums[i]);
        if(nums[i]<min){
            min = nums[i];
        }
        if(nums[i]>max){
            max = nums[i];
        }
    }

    printf("%d %d", min, max);
    
    return 0;
}