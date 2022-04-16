#include <stdio.h>

int calculate(int num);

int main(){
    int result=0;
    int check[10000] = {0, };
    result = calculate(1);
    for(int i=2; i<10000; i++){
        // printf("%d ", result);
        if(result-1 < 10000)
            check[result-1] = 1;
        result = calculate(i);
    }
    // printf("\n");

    for(int i=0; i<10000; i++){
        if(check[i]==0)
            printf("%d\n", i+1);
    }
}

int calculate(int num){
    int ans;

    ans = num;
    do{
        ans += num%10;
    }while((num/=10) != 0);

    return ans;
}