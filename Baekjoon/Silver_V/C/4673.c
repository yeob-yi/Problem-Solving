#include <stdio.h>

int check_self(int num);

int main(void){
    int before=1;
    int i=1;

    while(i<10000){
        i = check_self(i);
        for(int k=before; k<i; k++){
            printf("%d\n", k);
        }
        i++;
        before = i+1;
    }

    return 0;
}

int check_self(int num){
    int ans;

    if(num<10){
        ans = num + num;
    }else if(num<100){
        ans = num + num/10 + num%10;
    }else if(num<1000){
        ans = num + num/100 + (num%100)/10 + num%10;
    }else{
        ans = num + num/1000 + (num%1000)/100 + (num%100)/10 + num%10;
    }

    return ans;
}