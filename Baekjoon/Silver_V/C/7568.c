#include <stdio.h>
#include <string.h>

typedef struct Person {
    int height;
    int weight;
    int rank;
} person;

int main(void){

    // 1. 입력받은 사람 수만큼 person 구조체 배열 선언
    int num;
    scanf("%d", &num);
    person* plist = (person*)malloc(sizeof(person)*num);

    // 2. 사람 정보 입력받고 랭킹 초기화
    for(int i=0; i<num; i++){
        scanf("%d %d", &plist[i].weight, &plist[i].height);
        plist[i].rank = 0;
    }

    // 3. 첫 번째 사람 랭킹 1등으로 해놓고 비교 시작
    plist[0].rank = 1;

    int rankcount = 1;
    int* ranknum = (int*)calloc(num, sizeof(int));
    ranknum[0] = 1;

    for(int i=1; i<num; i++){
        for(int j=0; j<i; j++){
            if(plist[i].height>plist[j].height && plist[i].weight>plist[j].weight){
                plist[i].rank = plist[j].rank;
                for(int k=0; k<i; k++){
                    if(plist[k].rank == plist[j].rank){
                        plist[k].rank++;
                    }
                }
                rankcount ++;

                
            }else if(plist[i].height>plist[j].height || plist[i].weight>plist[j].weight){

            }else{

            }
        }
    }
    
    // 2명이 비교될 경우
    //    1) 1위보다 키, 몸무게 모두 클 경우 : plist[1].rank = plist[0].rank, plist[0].rank += 1;
    //    2) 1위보다 키, 몸무게 중 하나만 클 경우 : plist[1].rank = plist[0].rank;
    //    3) 1위보다 키, 몸무게가 모두 작을 경우 : plist[1].rank = plist[0].rank+1;

    // 3명이 비교될 경우



}



/*
int main(void){
    int count, countPerson;
    int num;
    scanf("%d", &);

    // 1. 첫 번째 사람을 1등으로
    // 2. num만큼 반복하면서 확인
    //   2-1. cur이 보다 W, H 모두 큰 경우
    //   2-2. cur이 보다 하나라도 큰 경우
    //   2-3. cur이 보다 모두 작은 경우
    person = (int**)malloc(sizeof(int*)*num);
    for(int i=0; i<num; i++){
        person[i] = (int*)malloc(sizeof(int)*3);
        for(int j=0; j<2; j++){
            scanf("%d", &person[i][j]);
        }
        person[i][2] = 0;
    }

    rank = (int**)malloc(sizeof(int*)*num);
    for(int i=0; i<num; i++){
        rank[i] = (int*)malloc(sizeof(int)*num);
    }

    memcpy(rank[0], person[0], sizeof(person[0]));
    count = 1;
    for(int i=1; i<num; i++){
        if(person[i][0] > person[countPerson][0] && person[i][1] > person[countPerson][1]){

        }
    }


    return 0;
}

*/