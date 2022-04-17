#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    int max, min;

    cin >> num1;
    cin >> num2;

    for(int i=(num1<num2)? num1: num2; i>0; i--){
        if(num1%i==0 && num2%i==0){
            max = i;
            break;
        }
    }

    min = max*(num1/max)*(num2/max);

    cout << max << endl;
    cout << min << endl;

    return 0;
}