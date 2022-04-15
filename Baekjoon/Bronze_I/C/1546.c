#include <stdio.h>

double calculate(int num, int M){
    return (num/(M*1.0) * 100);
}

int main(){
    int count = 0;
    int score[1000] = {0};
    int M = 0;
    double sum = 0;
    double ans = 0;

    scanf("%d", &count);
    for(int i=0; i<count; i++){
        scanf("%d", &score[i]);
        if(M < score[i])
            M = score[i];
    }

    for(int i=0; i<count; i++){
        sum += calculate(score[i], M);
    }

    ans = sum/count;
    printf("%f", ans);
    return 0;
}