#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
    int height;
    int weight;
    int rank;
} person;

int main(void){
    int num;
    scanf("%d", &num);
    person* plist = (person*)malloc(sizeof(person)*num);

    for(int i=0; i<num; i++){
        scanf("%d %d", &plist[i].weight, &plist[i].height);
        plist[i].rank = 1;
    }

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if(plist[i].height<plist[j].height && plist[i].weight<plist[j].weight){
                plist[i].rank++;
            }
        }
    }

    for(int i=0; i<num; i++){
        printf("%d ", plist[i].rank);
    }

    return 0;
}