#include <stdio.h>
#include <string.h>

int main(void){
    int num;
    int length;
    char buffer[50]; // buffer에 먼저 입력받은 후 문자열 길이만큼 새로운 공간 할당해서 저장.

    scanf("%d", &num);
    char* arr = (char*)malloc(sizeof(char)*num);
    for(int i=0; i<num; i++){
        scanf("%s", buffer);
        length = strlen(buffer);
        char* fileName = (char*) malloc(sizeof(char)*(length+1));
        strcpy(fileName, buffer);
        arr[i] = fileName;
    }
    
    int* check = (int*) malloc(sizeof(int)*length);

    for(int i=0; i<length; i++){
        for(int j=0; j<num-1; j++){
            if(arr[j][i]=arr[j+1][i]){
                check[i]=1;
            }else{
                check[i]=0;
                break;
            }
        }
    }

    for(int i=0; i<length; i++){
        if(check[i]==1){
            printf("%s",arr[0][i]);
        }else{
            printf("?");
        }
    }
    return 0;
}