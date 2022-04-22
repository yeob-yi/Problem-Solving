#include <iostream>
#include <string>
using namespace std;

int main(){
    int size;
    string *arr;
    int min;

    cin >> size;
    arr = new string[size]();

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    for(int i=1; i<size; i++){
        min = 0;
        if(arr[i].length() < arr[min].length())
            min = i;
        if(arr[i].length() == arr[min].length())
    }
    
    return 0;
}