#include <stdio.h>
#include <string.h>

int main(void){
    char str[600000];
    int num;
    char cmd;
    int cursor=0;
    char add[2];

    scanf("%s", str);
    cursor = strlen(str);

    scanf("%d", &num);

    for(int i=0; i<num; i++){
        scanf("%s", cmd);
        if(strncmp(cmd, "L",1)==0){
            if(cursor!=0){
                cursor--;
            }
        }else if(strncmp(cmd, "D", 1)==0){
            if(cursor!=strlen(str)){
                cursor++;
            }
        }else if(strncmp(cmd, "B", 1)==0){
            if(cursor!=0){
                for(int j=cursor; j<=strlen(str); j++){
                    str[j-1] = str[j];
                }    
            }
        }else if(strncmp(cmd, "P", 1)==0){
            scanf("%s", add);
            for(int j=strlen(str); j>=cursor; j--){
                str[j+1] = str[j];
            }
            strncpy(&str[cursor], add, 1);
            cursor++;
        }
    }

    printf("%s", str);

    return 0;
}