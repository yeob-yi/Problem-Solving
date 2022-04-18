#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    int length;
    int *arr = new int[10]();

    cin >> input;
    length = input.length();
    for(int i=0; i<length; i++){
        arr[input[i]-'0']++;
    }


    // for(int i=9; i>=0; i--){
    //     cout << arr[i];
    // }

    for(int i=9; i>=0; i--){
        while(arr[i]!=0){
            cout << i;
            arr[i]--;
        }
    }

    return 0;
}