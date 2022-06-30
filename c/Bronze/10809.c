#include <stdio.h>
#include <string.h>

int main(void){
    int alphabet[26];
    for(int i=0; i<26; i++){
        alphabet[i]=-1;
    }
    int whichAlpha;
    char S[100];

    scanf("%s", S);

    for(int i=0; i<strlen(S); i++){
        whichAlpha=S[i]-'a';
        if(alphabet[whichAlpha]==-1){
            alphabet[whichAlpha]=i;
        }
    }

    for(int i=0; i<26; i++){
        printf("%d ", alphabet[i]);
    }

    return 0;
}