#include <stdio.h>
#include <string.h>

int main(){
    int num=0;
    int length=0;
    int i=0;
    char input[50][51];
    char ans[51];

    scanf("%d", &num);
    for(i=0; i<num; i++)
        scanf("%s", input[i]);

    length = strlen(input[0]);
    strcpy(ans, input[0]);
    for(int i=1; i<num; i++)
        for(int j=0; j<length; j++)
            if(ans[j]!='?' && ans[j]!=input[i][j])
                ans[j] = '?';
    printf("%s", ans);

    return 0;
}