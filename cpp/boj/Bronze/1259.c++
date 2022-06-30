#include <iostream>
using namespace std;

int isPalindrome(int num);

int main(){
    int i, j;
    int input[10000];
    
    for(i=0; (i==0)||(input[i-1]!=0); i++)
        cin >> input[i];
    for(j=0; j<i-1; j++){
        if(isPalindrome(input[j])==0)
            cout << "yes\n";
        else
            cout << "no\n";        
    }

    return 0;
}

int isPalindrome(int num){
    int i, len;
    int numArr[5];
    for(i=0; num!=0; i++){
        numArr[i] = num%10;
        num /= 10;
        cout << numArr[i] << i << "\n";
    }
    len = i;
    for(i=0; i<len; i++){
        if(numArr[i]!=numArr[len-i-1])
            return 0;
    }
    return 1;
}