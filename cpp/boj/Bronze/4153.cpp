#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int max;
    while(!(a==0 && b==0 && c==0)){
        cin >> a;
        cin >> b;
        cin >> c;
        if(a>b && a>c)
            max = a;
        else if(b>c)
            max = b;
        else
            max = c;

    }
}