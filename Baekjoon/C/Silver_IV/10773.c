#include <stdio.h>
#include <stdlib.h>

int main(void){
    int K;
    int* zangbu = (int*)malloc(sizeof(int)*K);
    int input=0;
    int count=0;
    int total=0;

    scanf("%d", &K);
    for(int i=0; i<K; i++){
        scanf("%d", &input);
        if(input!=0){
            zangbu[count] = input;
            count+=1;
        }else{
            count-=1;
        }
    }

    for(int i=0; i<count; i++){
        total += zangbu[i];
    }

    printf("%d", total);
    
    return 0;
}