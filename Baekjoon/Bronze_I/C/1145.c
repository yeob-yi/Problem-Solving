#include <stdio.h>

int main(){
    int i, j;
    int check=0;
    int input[5];

    for(i=0; i<5; i++){
        scanf("%d", &input[i]);
    }

    i = 1;
    while(check<3){
        check = 0;
        for(j=0; j<5; j++)
            if(i%input[j]==0)
                check++;
        i++;
    }

    i--;
    printf("%d", i);
    return 0;
}