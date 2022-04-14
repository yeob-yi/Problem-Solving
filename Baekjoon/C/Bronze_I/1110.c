#include <stdio.h>

int calculate(int num){
    int new=0;
    if(num<10)
        new = num;
    else
        new = (num/10 + num%10)%10;
        new += (num%10)*10;
    return new;
}

int main(void){
    int cycle = 0;
    int input = 0;
    int temp=0;
    scanf("%d", &input);

    while(input != temp){
        if(cycle == 0)
            temp = calculate(input);
        else
            temp = calculate(temp);
        cycle++;
    }

    if(cycle==0)
        cycle = 1;
    
    printf("%d", cycle);
    return 0;
}