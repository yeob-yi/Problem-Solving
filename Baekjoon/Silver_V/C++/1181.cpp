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
        for(int j=0; j<size; j++){
            if(arr[i] == arr[j]){
                i--;
                size--;
                break;
            }
        }
    }

    while(size!=1)
        for(int i=1; i<size; i++){
            min = 0;
            if(arr[i].length() < arr[min].length())
                min = i;
            else if(arr[i].length() == arr[min].length())
                if(arr[i] < arr[min])
                    min = i;
            if(i==size-1){
                cout << arr[min] << "\n";
                arr[min] = arr[i];
                size --;
            }
        }
    

    return 0;
}