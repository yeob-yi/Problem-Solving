#include <stdio.h>

int main(){
    // 0. 변수 설정 : 입력받은 무게, 5로 나눈 몫, 반복 중 봉지 수, 최소 봉지 수
    int weight, repeat, num, rem, min = 0;

    // 1. 무게 입력받기
    scanf("%d", &weight);

    // 2. 5로 나눈 몫 구하기
    repeat = weight/5;

    // 3. 0부터 (5로 나눈 몫)까지 반복하면서 나머지를 3으로 나눈 나머지 구하기
    //     3-1. (나머지 == 0) 이면 봉지 수를 최소 봉지 수와 비교
    for(int i=0; i<=repeat; i++){
        rem = weight - i*5;
        if(rem%3 == 0){
            num = i + rem/3;
            if(min == 0 || num < min)
                min = num;
        }
    }

    if(min == 0)
        printf("%d", -1);
    else
        printf("%d", min);
        
    return 0;
}