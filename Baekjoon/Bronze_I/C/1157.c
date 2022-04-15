#include <stdio.h>
#include <string.h>

int main(){
    int lists[26] = {0};
    int index = 0;
    int max_index = 0;
    char max_value='A';
    char input[1000001];
    scanf("%s", input);

    // printf("%d %d\n", 'a', 'z'); // 97 ~ 122
    // printf("%d %d", 'A', 'Z'); // 65 ~ 90
    int len = strlen(input);
    for(int i=0; i<len; i++){
        if(input[i]>95)
            index = input[i]-97;
        else
            index = input[i]-65;
        lists[index]++;

        // if(max_index != index){
        //     if(lists[max_index] == lists[index]){
        //         max_index = index;
        //         max_value = '?';
        //     }
        //     else if(lists[max_index] < lists[index]){
        //         max_index = index;
        //         max_value = input[i];
        //     }
        // }
        // printf(" %d %d %d %c /", max_index, lists[max_index], lists[index], max_value);
    }

    // printf("\n");
    // for(int j=0; j<26; j++){
    //     printf("%d ", lists[j]);
    // }

    for(int i=1; i<26; i++){
        if(lists[max_index]==lists[i])
            max_value = '?';
        else if(lists[max_index]<lists[i]){
            max_index = i;
            max_value = 'A'+i;
        }
    }

    printf("%c", max_value);
    return 0;
}