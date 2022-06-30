#include <iostream>
using namespace std;

int main(){
    int num, M;
    int temp, temp_max=0;

    cin >> num;
    cin >> M;
    int *arr = new int[num]();
    for(int i=0; i<num; i++)
        cin >> arr[i];
    
    for(int i=0; i<num-2; i++)
        for(int j=i+1; j<num-1; j++)
            for(int k=j+1; k<num; k++){
                temp = arr[i] + arr[j] + arr[k];
                if((temp_max < temp) && (temp <= M))
                    temp_max = temp;
            }

    cout << temp_max;
    return 0;
}